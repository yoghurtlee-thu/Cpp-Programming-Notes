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
        cout << "һ��ƽƽ������˵�����" << endl;
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