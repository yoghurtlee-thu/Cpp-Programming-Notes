// ���ڽ��������ǳ����
#include <iostream>

using namespace std;

class ppl
{
public:
    int *h;
    ppl(int a)
    {
        cout << "һ��ƽƽ������˵ĵ���" << endl;
        h = new int(a);
    }

    ppl(const ppl &p) // ��ȷ�����
    {
        cout << "һ��ƽƽ������˵ĵ���" << endl;
        h = new int(*p.h);
    }

    ~ppl()
    {
        cout << "һ��ƽƽ������˵�����" << endl;
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
    ppl p2(p1); // p2��h��Ա������p1��h��Ա��ֵ��Ҳ����ָ��ͬһ���ڴ�

    cout << "p1.h = " << *p1.h << endl;
    cout << "p2.h = " << *p2.h << endl;

    return 0;
}