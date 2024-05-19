// 本节讲解构造函数的分类和调用方式
#include <iostream>

using namespace std;

class ppl
{
public:
    int age;

    ppl()
    {
        // 默认构造
    }

    ppl(int a)
    {
        // 带int参量的有参构造
    }

    ppl(const ppl &p)
    {
        // 拷贝构造
    }
};

int main()
{
    // 1. 括号法
    ppl p1;     // 默认构造
    ppl p2(1);  // 带int参量的有参构造
    ppl p3(p2); // 拷贝构造
    // ppl p4();   // 错误. 编译器会将之视为函数声明而非构造

    // 2. 显式法
    ppl p4 = ppl(1);
    ppl p5 = ppl(p2);

    // 3. 隐式转换法
    ppl p6 = 1;  // 等价于 ppl p6 = ppl(1);
    ppl p7 = p2; // 等价于 ppl p7 = ppl(p2);

    // 注意：编译器会自动提供无参构造、拷贝构造、析构函数，这三个函数称为编译器提供的默认构造函数

    // 匿名对象的构造
    ppl();   // 默认构造
    ppl(1);  // 有参构造
    // ppl(p4); // 不能用拷贝构造函数初始化匿名对象

    // int a = int();  // 默认构造
    // int b = int(1); // 有参构造
    // int c = int(b); // 拷贝构造

    int a;     // 默认构造, 隐式转换为 int a = int(); (未初始化)
    int b = 1; // 有参构造, 隐式转换为 int b = int(1);
    int c = b; // 拷贝构造, 隐式转换为 int c = int(b);

    return 0;
}