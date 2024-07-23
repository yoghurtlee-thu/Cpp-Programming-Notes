#include <functional>
#include <iostream>

int func(const int &x, int y)
{
    std::cout << x + y << std::endl;
    return x + y;
}

int main()
{
    std::function<int(int, int)> f = func;
    f(1, 2);
    return 0;
}