// todo：本节使用空指针进行类成员函数调用
#include <iostream>

using namespace std;

class ppl
{
public:
    int age;
    
    void test01()
    {
        cout << "这是一个ppl类的实例" << endl;
    }

    void test02()
    {
        cout << "此人的年龄为" << age << "岁" << endl;
    }
};

int main()
{
    ppl *p = nullptr;
    p->test01();
    // p->test02(); // 会报错，因为p是空指针

    return 0;
}