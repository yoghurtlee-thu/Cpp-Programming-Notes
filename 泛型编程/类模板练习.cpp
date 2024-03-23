#include <iostream>

using namespace std;

template <class T>
class my_arr
{
public:
    int size;
    T *arr;

    my_arr(int size) // 深拷贝
    {
        this->size = size;
        arr = new T[size];
    }
    ~my_arr()
    {
        delete[] arr;
    }

    T& operator[](int index)
    {
        if (index < 0 || index >= size)
        {
            throw out_of_range("Index out of range");
        }
        return arr[index];
    }

    my_arr operator=(my_arr &a)
    {
        if (this->size != a.size)
        {
            delete[] arr;
            arr = new T[a.size];
            size = a.size;
        }
        for (int i = 0; i < size; i++)
        {
            arr[i] = a.arr[i];
        }
        return *this;
    }

    void append(const T &a)
    {
        T *temp = new T[size + 1];
        for (int i = 0; i < size; i++)
        {
            temp[i] = arr[i];
        }
        temp[size] = a;
        delete[] arr;
        arr = temp;
        size++;
        return;
    }

    T popup()
    {
        if (size == 0)
        {
            throw out_of_range("Array is empty");
        }

        T tmp = arr[size - 1];
        T *temp = new T[size - 1];
        for (int i = 0; i < size - 1; i++)
        {
            temp[i] = arr[i];
        }
        delete[] arr;
        arr = temp;
        size--;
        return tmp;
    }

    int len()
    {
        return size;
    }
};