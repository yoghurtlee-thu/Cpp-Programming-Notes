// ���ڽ�����Ķ����Լ�Ȩ�޿���
#include <iostream>
#include <string>

using namespace std;

class student
{
public: // ���г�Ա, ����������ⲿ����
    string name;
    int age;
    int score;

    void show()
    {
        cout << name << "��������" << age << "���ɼ���" << score << endl;
    }

    void set_id(int i)
    {
        id = i;
    }

    void show_id(const student &s)
    {
        cout << s.name << "��id��:  " << s.id << endl;
    }

    void set_pswd(const string &s)
    {
        pswd = s;
    }

protected: // ������Ա, ����������ڲ����������з���
    int id;

private: // ˽�г�Ա, ֻ��������ڲ�����. ���������ǰ��, ����ʡ��private
    string pswd;
};

int main()
{
    student stu1;
    stu1.name = "Chlorine";
    stu1.age = 18;
    stu1.score = 100;
    stu1.show();
    stu1.set_pswd("123456"); // ����ͨ�����з�������˽�г�Ա
    stu1.set_id(17); // ����ͨ�����з������ʱ�����Ա
    // stu1.id = 17; // ��������

    student stu2;
    stu2.name = "Natrium";
    stu2.age = 19;
    stu2.score = 95;
    stu2.set_pswd("654321");
    stu2.set_id(11);
    stu2.show();

    stu1.show_id(stu1); // ����������ͨ�����з������ʱ�����Ա
    stu1.show_id(stu2); // ��������һ������ͨ�����з������ʱ�����Ա
    
    // stu1.pswd = "123456"; // ����,���ⲻ�ܷ���˽�г�Ա
    // stu1.id = 1000; // ����,���ⲻ�ܷ��ʱ�����Ա

    return 0;
}