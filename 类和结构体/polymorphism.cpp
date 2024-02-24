// 本节讲解多态
#include <iostream>

using namespace std;

class student
{
public:
    virtual void vacation()
    {
        cout << "学生放假了!" << endl;
    }
};

class high_school_student : public student
{
public:
    void vacation()
    {
        cout << "假期是什么?" << endl;
    }
};

class college_student : public student
{
public:
    void vacation()
    {
        cout << "废 寝 忘 食" << endl;
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