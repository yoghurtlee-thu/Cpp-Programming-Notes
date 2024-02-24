#include <iostream>

using namespace std;

class ppl
{
public:
    ppl(int a)
    {
    }
    ~ppl()
    {
        cout << "一个平平无奇的人的消亡" << endl;
    }
};

void test()
{
    ppl(1);
    cout << "test" << endl;
}

int main()
{
    test();
    return 0;
}