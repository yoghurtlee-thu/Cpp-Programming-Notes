#include <iostream>
#include <string>

using namespace std;

struct student
{
    // public: // 结构体默认为公有
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

protected:
    int id;

private:
    string pswd;
};

int main()
{
    student stu1;
    stu1.name = "Chlorine";
    stu1.age = 18;
    stu1.score = 100;
    stu1.show();
    stu1.set_pswd("123456");
    stu1.set_id(17);

    student stu2;
    stu2.name = "Natrium";
    stu2.age = 19;
    stu2.score = 95;
    stu2.set_pswd("654321");
    stu2.set_id(11);
    stu2.show();

    stu1.show_id(stu1);
    stu1.show_id(stu2);
}