// 本节讲解函数模板和普通函数的调用顺序

#include <iostream>

using namespace std;

void test(int a)
{
    cout << "普通函数" << endl;
    return;
    // 如果此处只有声明而没有实现，那么编译器会报错
}

template <typename T>
void test(T a)
{
    cout << "函数模板" << endl;
    return;
}

int main()
{
    test(1); // 优先调用普通函数
    test<>(1); // 把函数模板骗出来
    test(1.1); // 优先调用函数模板
    test('a'); // 优先调用函数模板
    return 0;
}