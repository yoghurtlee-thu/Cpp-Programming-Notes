// 本节讲解结构体的运算符重载
#include <iostream>

using namespace std;

struct cube
{
    int length;
    int width;
    int height;
    int volume()
    {
        return length * width * height;
    }

    bool operator==(const cube &other) // 重载==运算符, 使得两个cube对象可以直接比较
    {
        return length == other.length && width == other.width && height == other.height;
    }
};

int main()
{
    cube c1 = {1, 2, 3};
    cube c2 = {1, 2, 3};
    cout << (c1 == c2) << endl;
    return 0;
}