// ���ڲ����麯�����һЩ����
#include <iostream>

using namespace std;

class Base
{
public:
    virtual void func()
    {
        cout << "����һ�����Ժ���" << endl;
    }
};

class Derived1 : public Base
{
public:
    void func()
    {
        cout << "���ǵ�һ��������Ĳ��Ժ���" << endl;
    }
};

class Derived2 : public Base
{
public:
    void func()
    {
        cout << "���ǵڶ���������Ĳ��Ժ���" << endl;
    }
};

int main()
{
    Derived1 d1;
    d1.func();
    return 0;
}