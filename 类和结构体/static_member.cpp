// todo：本节讲解静态成员
#include <iostream>

using namespace std;

class ppl
{
public:
    // static int humanity = 0; // 静态成员变量不能在类内初始化
    static int humanity; // 静态成员变量
    int age;             // 普通成员变量

    static void set_humanity(int h) // 静态成员函数
    {
        humanity = h;
    }

    static void set_age(int a)
    {
        // age = a; // 静态成员函数不能访问普通成员变量
    }

private:
    static int pri_sta; // 静态成员变量可以是私有的
};

int ppl::humanity = 0; // 静态成员变量初始化
int ppl::pri_sta = 0;  // 私有的静态成员变量初始化

int main()
{
    ppl p1, p2;
    p1.set_humanity(100);
    p2.set_humanity(200);
    cout << p1.humanity << endl;
    return 0;
}