#include <iostream>

using namespace std;

class ppl
{
public:
    int age;
    
    void test01()
    {
        cout << "����һ��ppl���ʵ��" << endl;
    }

    void test02()
    {
        cout << "���˵�����Ϊ" << age << "��" << endl;
    }
};

int main()
{
    ppl *p = nullptr;
    p->test01();
    // p->test02(); // �ᱨ��,��Ϊp�ǿ�ָ��

    return 0;
}