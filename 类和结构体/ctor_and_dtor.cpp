#include <iostream>

using namespace std;

class ppl
{
public:
    ppl()
    {
        cout << "һ��ƽƽ������˵ĵ���" << endl;
    }
    ~ppl()
    {
        cout << "һ��ƽƽ������˵�����" << endl;
    }
    // ��װ���ǽ�����һЩ��Ա�Ķ���
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
#endif // ��һ�ζ��������ں�����

int main()
{
    ppl p;
    
    system("pause");
    return 0;
}