#include <iostream>
using namespace std;

template <class T>
class MyArray
{
public:
    MyArray(int size);
    ~MyArray();
    void sort();
    bool check();
    void display();
private:
    T* data;
    int size;
};

template<class T>
MyArray<T>::MyArray(int size)
{
    this->size = size;
    data = new T[size];
    for (int i = 0; i < size; i++)
        cin >> data[i];
}

template<class T>
void MyArray<T>::sort()
{
    T hold;
    int bound, pos;
    pos = size - 1;
    while (pos)
    {
        bound = pos;
        pos = 0;
        for (int i = 0; i < bound; i++)
            if (data[i] > data[i + 1])
            {
                hold = data[i];
                data[i] = data[i + 1];
                data[i + 1] = hold;
                pos = i;
            }
    }
}

template <class T>
void MyArray<T>::display()
{
    for (int i = 0; i < size - 1; i++)
        cout << *(data + i) << " ";
    cout << *(data + size - 1) << endl;
}

template<class T>
MyArray<T>::~MyArray() { delete[] data; }

template<class T>
bool MyArray<T>::check() {
    int i;
    for (i = 0; i < size - 1; i++)
        if (data[i] > data[i + 1]) { cout << "ERROR!" << endl; return false; }
    return true;
}
int main()
{
    MyArray<int>* pI;
    MyArray<float>* pF;
    MyArray<char>* pC;
    int ty, size;
    cin >> ty;
    while (ty > 0) {
        cin >> size;
        switch (ty) {
        case 1: pI = new MyArray<int>(size);   pI->sort(); pI->check(); pI->display(); delete pI; break;
        case 2: pF = new MyArray<float>(size); pF->sort(); pF->check(); pF->display(); delete pF; break;
        case 3: pC = new MyArray<char>(size);  pC->sort(); pC->check(); pC->display(); delete pC; break;
        }
        cin >> ty;
    }
    return 0;
}

