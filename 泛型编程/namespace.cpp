// TODO：本节讲解命名空间

#include <iostream>

class A
{
public:
    int a;
};

class B : public A
{
public:
    B(int _a)
    {
        a = _a;
        A::a = _a - 1;
    };
    int a;
};

int main()
{
    B v = B(1);
    std::cout << v.a << std::endl;
    std::cout << v.A::a << std::endl;
    std::cout << sizeof(v) << std::endl;
    return 0;
}