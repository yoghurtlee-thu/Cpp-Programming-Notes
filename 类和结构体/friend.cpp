// ���ڽ�����Ԫ
#include <iostream>
#include <string>

using namespace std;

class goodfriend_cls
{
public:
    void visit(ppl &p);
    string str;
};

class ppl
{
    friend void goodfriend_func(ppl &p); // ������Ԫ����
    // friend class goodfriend_cls;         // ������Ԫ��
    friend void goodfriend_cls::visit(ppl &p); // ������Ԫ��ĳ�Ա����
public:
    string name;

private:
    string crush_name; // ��������(��)
};


void goodfriend_cls::visit(ppl &p)
{
    cout << "TA�İ���������: " << p.crush_name << endl;
    this->str = p.crush_name;
}


// void someone(ppl &p) // ��Ȩ����
// {
//     cout << "TA�İ���������: " << p.crush_name << endl;
// }

void goodfriend_func(ppl &p)
{
    cout << "TA�İ���������: " << p.crush_name << endl;
}

int main()
{
    ppl p;
    goodfriend_cls g;
    g.visit(p);
    cout << "g.str: " << g.str << endl;

    return 0;
}