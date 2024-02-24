// 本节讲解友元
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
    friend void goodfriend_func(ppl &p); // 声明友元函数
    // friend class goodfriend_cls;         // 声明友元类
    friend void goodfriend_cls::visit(ppl &p); // 声明友元类的成员函数
public:
    string name;

private:
    string crush_name; // 暗恋对象(嗯)
};


void goodfriend_cls::visit(ppl &p)
{
    cout << "TA的暗恋对象是: " << p.crush_name << endl;
    this->str = p.crush_name;
}


// void someone(ppl &p) // 无权访问
// {
//     cout << "TA的暗恋对象是: " << p.crush_name << endl;
// }

void goodfriend_func(ppl &p)
{
    cout << "TA的暗恋对象是: " << p.crush_name << endl;
}

int main()
{
    ppl p;
    goodfriend_cls g;
    g.visit(p);
    cout << "g.str: " << g.str << endl;

    return 0;
}