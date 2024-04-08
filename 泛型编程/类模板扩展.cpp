// todo：本节讲解类模板的扩展知识
#include <iostream>
#include "分文件编写.hpp" // 可以通过引用.hpp文件来实现分文件编写

using namespace std;

template <class T>
class A
{
public:
    T a;
    A(T a) // 有参构造函数
    {
        this->a = a;
    }
    void show()
    {
        cout << a << endl;
        return;
    }
    void memfunc(T a); // 类模板成员函数的声明
};

void test1(A<int> &a) // 类模板对象指定类型。老规矩，引用传递
{
    a.show();
    return;
}

// 再加一个模板
template <class R>
void test2(A<R> &a)
{
    cout << "这个类的模板类型为" << typeid(R).name() << endl;
    a.show();
    return;
}

// 全类模板化
template <class T>
void test3(T &a)
{
    a.show();
    return;
}

template <class T>
void A<T>::memfunc(T a) // 类模板成员函数的类外实现
{
    cout << a << endl;
    return;
}

int main()
{
    B<int> b = {1};
    b.memfunc(1); // 完全可以调用
    return 0;
}