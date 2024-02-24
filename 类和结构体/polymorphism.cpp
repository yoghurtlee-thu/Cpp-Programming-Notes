// ���ڽ����̬
#include <iostream>

using namespace std;

class student
{
public:
    virtual void vacation()
    {
        cout << "ѧ���ż���!" << endl;
    }
};

class high_school_student : public student
{
public:
    void vacation()
    {
        cout << "������ʲô?" << endl;
    }
};

class college_student : public student
{
public:
    void vacation()
    {
        cout << "�� �� �� ʳ" << endl;
    }
};

void test(student &s)
{
    s.vacation();
}

int main()
{
    void (student::*p)() = &student::vacation;
    high_school_student hss;
    college_student cs;
    test(hss);
    test(cs);
    cout << sizeof(student) << endl;
    (hss.*p)();
    return 0;
}