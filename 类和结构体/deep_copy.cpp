// 本节讲解深拷贝和浅拷贝
#include <iostream>

using namespace std;

class ppl
{
public:
    int *h;
    ppl(int a)
    {
        cout << "一个平平无奇的人的诞生" << endl;
        h = new int(a);
    }

    ppl(const ppl &p) // 正确的深拷贝
    {
        cout << "一个平平无奇的人的诞生" << endl;
        h = new int(*p.h);
    }

    ~ppl()
    {
        cout << "一个平平无奇的人的消亡" << endl;
        if (h != nullptr)
        {
            delete h;
            h = nullptr;
        }
    }
};

int main()
{
    ppl p1(170);
    ppl p2(p1); // p2的h成员复制了p1的h成员的值，也就是指向同一块内存

    cout << "p1.h = " << *p1.h << endl;
    cout << "p2.h = " << *p2.h << endl;

    return 0;
}