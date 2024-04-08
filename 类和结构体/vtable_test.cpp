// 本节测试虚函数表的一些特性
#include <iostream>

using namespace std;

class Base
{
public:
    virtual void func()
    {
        cout << "这是一个测试函数" << endl;
    }
};

class Derived1 : public Base
{
public:
    void func()
    {
        cout << "这是第一个派生类的测试函数" << endl;
    }
};

class Derived2 : public Base
{
public:
    void func()
    {
        cout << "这是第二个派生类的测试函数" << endl;
    }
};

int main()
{
    Derived1 d1;
    d1.func();
    return 0;
}