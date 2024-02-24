// 本节介绍静态变量
#include <iostream>

using namespace std;

void test01()
{
    int cnt = 0;
    cnt++;
    cout << "test01()函数已调用" << cnt << "次" << endl;
}

void test02()
{
    static int cnt = 0;
    cnt++;
    cout << "test02()函数已调用" << cnt << "次" << endl;
}

int main()
{
    for (int i = 0; i < 3; i++)
    {
        test01();
        test02();
    }

    return 0;
}