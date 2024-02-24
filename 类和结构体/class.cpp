// 本节讲解类的定义以及权限控制
#include <iostream>
#include <string>

using namespace std;

class student
{
public: // 公有成员, 可以在类的外部访问
    string name;
    int age;
    int score;

    void show()
    {
        cout << name << "的年龄是" << age << "，成绩是" << score << endl;
    }

    void set_id(int i)
    {
        id = i;
    }

    void show_id(const student &s)
    {
        cout << s.name << "的id是:  " << s.id << endl;
    }

    void set_pswd(const string &s)
    {
        pswd = s;
    }

protected: // 保护成员, 可以在类的内部和派生类中访问
    int id;

private: // 私有成员, 只能在类的内部访问. 如果放在最前面, 可以省略private
    string pswd;
};

int main()
{
    student stu1;
    stu1.name = "Chlorine";
    stu1.age = 18;
    stu1.score = 100;
    stu1.show();
    stu1.set_pswd("123456"); // 可以通过公有方法访问私有成员
    stu1.set_id(17); // 可以通过公有方法访问保护成员
    // stu1.id = 17; // 这样不行

    student stu2;
    stu2.name = "Natrium";
    stu2.age = 19;
    stu2.score = 95;
    stu2.set_pswd("654321");
    stu2.set_id(11);
    stu2.show();

    stu1.show_id(stu1); // 可以在类外通过公有方法访问保护成员
    stu1.show_id(stu2); // 可以在另一个类中通过公有方法访问保护成员
    
    // stu1.pswd = "123456"; // 报错,类外不能访问私有成员
    // stu1.id = 1000; // 报错,类外不能访问保护成员

    return 0;
}