// 本节讲解C++对象模型和this指针
#include <iostream>

using namespace std;

class earth
{
public:
    int a;
    static int b;
    void func()
    {
        cout << "这是一个测试函数" << endl;
    }
};
int b = 0;

// class water
// {
// };

// class fire
// {
// };

// class air
// {
// };


class ppl
{
public:
    ppl(int age)
    {
        // age = age; // 不能这样写,有冲突
        this->age = age; // 这样写
    }
    
    int age;

    void test()
    {
        cout << "这是一个测试函数" << endl;
    }

    void set_age(int a)
    {
        age = a;
        this->age = a; // 这两句代码实际是等价的
    }

    // void add_age(ppl &p)
    // {
    //     this->age += p.age;
    // }

    ppl &add_age(ppl &p) // this指针解引用来返回对象本身的引用
    {
        this->age += p.age;
        return *this;
    }

    void change_this()
    {
        // this = nullptr; // this指针是一个指针常量,不能被修改
    }

};

int main()
{
    // cout << sizeof(earth) << endl; // 空对象的大小为1个字节

    ppl p1(10), p2(20);
    p1.test();
    p2.test();

    ppl p3(18);
    cout << p3.age << endl;

    p1.add_age(p2).add_age(p2).add_age(p2); // 超 级 加 辈

    return 0;
}