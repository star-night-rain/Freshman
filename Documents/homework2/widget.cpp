#include "widget.h"
#include "ui_widget.h"
#include <QDebug>
#include <QFileDialog>
#include <QScrollArea>
#include <QMessageBox>

Widget::Widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Widget)
{
    ui->setupUi(this);
    m_pPixMap = nullptr;
    m_pMovie = nullptr;
    m_bIsMovie = false;
    m_bIsPlaying = false;
    QRect rcLabel = ui->labelShow->geometry();
    QScrollArea *pSA = new QScrollArea(this);
    pSA->setWidget(ui->labelShow);
    pSA->setGeometry(rcLabel);
    qDebug()<<QImageReader::supportedImageFormats();
    qDebug()<<QMovie::supportedFormats();
}

Widget::~Widget()
{
    ClearOldShow();
    delete ui;
}

void Widget::ClearOldShow()
{
    ui->labelShow->clear();
    if( m_pPixMap != nullptr )
    {
        delete m_pPixMap;   m_pPixMap = nullptr;
    }
    if( m_pMovie != nullptr )
    {
        if(m_bIsPlaying)
        {
            m_pMovie->stop();
        }
        delete m_pMovie;    m_pMovie = nullptr;
    }
    m_bIsMovie = false;
    m_bIsPlaying = false;
}

void Widget::on_pushButtonOpenPic_clicked()
{
    QString strFileName;
    strFileName = QFileDialog::getOpenFileName(this, tr("打开静态图片"), "",
                               "Pictures (*.bmp *.jpg *.jpeg *.png *.xpm);;All files(*)");
    if(strFileName.isEmpty())
    {
        return;
    }
    ClearOldShow();
    qDebug()<<strFileName;
    m_pPixMap = new QPixmap();
    if( m_pPixMap->load(strFileName) )
    {
        ui->labelShow->setPixmap(*m_pPixMap);
        ui->labelShow->setGeometry( m_pPixMap->rect() );
        //设置 bool 状态
        m_bIsMovie = false;
        m_bIsPlaying = false;
    }
    else
    {
        delete m_pPixMap;   m_pPixMap = nullptr;
        QMessageBox::critical(this, tr("打开失败"),
                              tr("打开图片失败，文件名为：\r\n%1").arg(strFileName));
    }
}

void Widget::on_pushButtonOpenMov_clicked()
{
    QString strFileName;
    strFileName = QFileDialog::getOpenFileName(this, tr("打开动态图片"), "",
                               "Movies (*.gif *.mng);;All files(*)");
    if(strFileName.isEmpty())
    {
        return;
    }
    ClearOldShow();
    qDebug()<<strFileName;
    m_pMovie = new QMovie(strFileName);
    if( ! m_pMovie->isValid() )
    {
        QMessageBox::critical(this, tr("动态图不可用"),
                              tr("动态图格式不支持或读取出错，文件名为：\r\n%1").arg(strFileName));
        delete m_pMovie;    m_pMovie = nullptr;
        return;
    }
    int nCount = m_pMovie->frameCount();
    qDebug()<<tr("总帧数：%1").arg(nCount);
    if( nCount > 0 )
    {
        ui->horizontalSlider->setMaximum(nCount);
    }
    else
    {
        ui->horizontalSlider->setMaximum(100);
    }
    ui->labelShow->setMovie(m_pMovie);
    m_bIsMovie = true;
    m_bIsPlaying = false;
    connect(m_pMovie, SIGNAL(error(QImageReader::ImageReaderError)),
            this, SLOT(RecvPlayError(QImageReader::ImageReaderError)));
    connect(m_pMovie, SIGNAL(frameChanged(int)),
            this, SLOT(RecvFrameNumber(int)));
    if(  m_pMovie->jumpToFrame(0) )
    {
        ui->labelShow->setGeometry( m_pMovie->frameRect() );
    }
}
void Widget::on_pushButtonStart_clicked()
{
    if( ! m_bIsMovie)
    {
        return;
    }
    if( m_bIsPlaying )
    {
        return;
    }
    m_bIsPlaying = true;
    m_pMovie->start();
    qDebug()<< tr("循环计数：%1").arg( m_pMovie->loopCount() );
}

void Widget::on_pushButtonStop_clicked()
{
    if( ! m_bIsMovie)
    {
        return;
    }
    if( ! m_bIsPlaying)
    {
        return;
    }
    m_bIsPlaying = false;
    m_pMovie->stop();
}


void Widget::RecvPlayError(QImageReader::ImageReaderError error)
{
    qDebug()<<tr("读取动态图错误的代码：%1").arg(error);
    QMessageBox::critical(this, tr("播放出错"),
                          tr("播放动态图出错，文件名为：\r\n%1").arg(m_pMovie->fileName()));
    m_bIsPlaying = false;
}

void Widget::RecvFrameNumber(int frameNumber)
{
    ui->horizontalSlider->setValue(frameNumber);
}


