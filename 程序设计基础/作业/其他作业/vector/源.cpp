#include <iostream>
#include <string>
using namespace std;

template <class T>
class Vector
{
private:
	T* data;
	int size;
	int max;
public:
	Vector() :size(0),max(100)
	{
		data = new T[max];
	}
	~Vector()
	{
		delete[] data;
	}
	Vector(const Vector& x)
	{
		size = x.size;
		max = x.max;
		data = new T[max];
		memcpy(data, x.data, 4 * size);
	}
	T& operator [](int x)
	{
		return data[x];
	}
	int add(T x)
	{
		if (size == max)
		{
			max *= 2;
			T* pa = new T[max];
			memcpy(pa, data, size * 4);
			delete[] data;
			data = pa;
		}
		data[size] = x;
		size++;
		return size-1;
	}
	void remove(int x)
	{
		for (int i = x; i < size - 1; i++)
			data[i] = data[i + 1];
		size--;
	}
	int get_size()
	{
		return size;
	}
};

int main()
{
    Vector<int> vint;
    int n, m;
    cin >> n >> m;
    for (int i = 0; i < n; i++) {
        //    add() can inflate the vector automatically
        vint.add(i);
    }
    //    get_size() returns the number of elements stored in the vector
    cout << vint.get_size() << endl;
    cout << vint[m] << endl;
    //    remove() removes the element at the index which begins from zero
    vint.remove(m);
    cout << vint.add(-1) << endl;
    cout << vint[m] << endl;
    Vector<int> vv = vint;
    cout << vv[vv.get_size() - 1] << endl;
    vv.add(m);
    cout << vint.get_size() << endl;
}
