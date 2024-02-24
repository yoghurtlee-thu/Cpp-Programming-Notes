// 本节讲解类的继承
#include <iostream>

using namespace std;

class base // 基类
{
public:
    base()
    {
        cout << "base的构造" << endl;
    }
    ~base()
    {
        cout << "base的析构" << endl;
    }
    int a;

protected:
    int b;

private:
    int c;
};

class derived1 : public base // 公有继承
{
public:
    derived1()
    {
        cout << "derived1的构造" << endl;
    }
    ~derived1()
    {
        cout << "derived1的析构" << endl;
    }
    void func()
    {
        a = 1; // 可以访问基类的公有成员
        b = 2; // 可以访问基类的保护成员
        // c = 3; // 不可以访问基类的私有成员
    }

    /*相当于:
    public:
        int a;
    
    protected:
        int b;
    */
};

class derived2 : protected base // 保护继承
{
public:
    void func()
    {
        a = 1; // 可以访问基类的公有成员
        b = 2; // 可以访问基类的保护成员
        // c = 3; // 不可以访问基类的私有成员
    }

    /*相当于:
    protected:
        int a;
        int b;
    */
};

class derived3 : private base // 私有继承
{
public:
    void func()
    {
        a = 1; // 可以访问基类的公有成员
        b = 2; // 可以访问基类的保护成员
        // c = 3; // 不可以访问基类的私有成员
    }

    /*相当于:
    private:
        int a;
        int b;
    */
};

int main()
{
    cout << sizeof(derived1) << endl;
    derived1 d1;
    return 0;
}