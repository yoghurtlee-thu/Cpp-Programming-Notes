// 本节讲解纯虚函数和抽象类
#include <iostream>

using namespace std;

class student
{
public:
    virtual void vacation() = 0; // 纯虚函数
};

class high_school_student : public student // 抽象派生类
{
};

class college_student : public student // 正确的派生类
{
public:
    void vacation()
    {
        cout << "废 寝 忘 食" << endl;
    }
};

int main()
{
    // student s; // 错误,不能为抽象类创建实例
    // high_school_student h;
    college_student c;

    cout << sizeof(student) << endl;
    return 0;
}