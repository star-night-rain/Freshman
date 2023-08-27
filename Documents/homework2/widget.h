#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include <QPixmap>
#include <QMovie>
#include <QImageReader>

namespace Ui {
class Widget;
}

class Widget : public QWidget
{
    Q_OBJECT

public:
    explicit Widget(QWidget *parent = nullptr);
    ~Widget();

public slots:
    void RecvPlayError(QImageReader::ImageReaderError error);
    void RecvFrameNumber(int frameNumber);

private slots:
    void on_pushButtonOpenPic_clicked();

    void on_pushButtonOpenMov_clicked();

    void on_pushButtonStart_clicked();

    void on_pushButtonStop_clicked();


private:
    Ui::Widget *ui;
    QPixmap *m_pPixMap;
    QMovie *m_pMovie;
    bool m_bIsMovie;
    bool m_bIsPlaying;
    void ClearOldShow();
};

#endif // WIDGET_H
