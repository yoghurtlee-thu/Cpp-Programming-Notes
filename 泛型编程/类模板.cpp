// todo：本节讲解类模板
#include <iostream>

using namespace std;

template <class T>
class A
{
public:
    T a;
    void show()
    {
        cout << a << endl;
        return;
    }
};

template <class T1, class T2>
class B
{
public:
    T1 a;
    T2 b;
    void show()
    {
        cout << a << " " << b << endl;
        return;
    }
};

int main()
{
    A<int> a;
    A<char> b;

    // A<> c = {3}; // 不行，必须指定类型

    int x = 1;
    int *p = &x;
    A<int *> c = {p}; // 没错，指针都行
    c.show();
    return 0;
}