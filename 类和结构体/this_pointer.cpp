// ���ڽ���C++����ģ�ͺ�thisָ��
#include <iostream>

using namespace std;

class earth
{
public:
    int a;
    static int b;
    void func()
    {
        cout << "����һ�����Ժ���" << endl;
    }
};
int b = 0;

// class water
// {
// };

// class fire
// {
// };

// class air
// {
// };


class ppl
{
public:
    ppl(int age)
    {
        // age = age; // ��������д,�г�ͻ
        this->age = age; // ����д
    }
    
    int age;

    void test()
    {
        cout << "����һ�����Ժ���" << endl;
    }

    void set_age(int a)
    {
        age = a;
        this->age = a; // ���������ʵ���ǵȼ۵�
    }

    // void add_age(ppl &p)
    // {
    //     this->age += p.age;
    // }

    ppl &add_age(ppl &p) // thisָ������������ض����������
    {
        this->age += p.age;
        return *this;
    }

    void change_this()
    {
        // this = nullptr; // thisָ����һ��ָ�볣��,���ܱ��޸�
    }

};

int main()
{
    // cout << sizeof(earth) << endl; // �ն���Ĵ�СΪ1���ֽ�

    ppl p1(10), p2(20);
    p1.test();
    p2.test();

    ppl p3(18);
    cout << p3.age << endl;

    p1.add_age(p2).add_age(p2).add_age(p2); // �� �� �� ��

    return 0;
}