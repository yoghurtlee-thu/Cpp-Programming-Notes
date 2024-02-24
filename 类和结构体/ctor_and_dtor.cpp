#include <iostream>

using namespace std;

class ppl
{
public:
    ppl()
    {
        cout << "一个平平无奇的人的诞生" << endl;
    }
    ~ppl()
    {
        cout << "一个平平无奇的人的消亡" << endl;
    }
    // 假装我们进行了一些成员的定义
};

#if 0
void test()
{
    ppl p;
}

int main()
{
    test();
    return 0;
}
#endif // 这一段定义在外在函数中

int main()
{
    ppl p;
    
    system("pause");
    return 0;
}