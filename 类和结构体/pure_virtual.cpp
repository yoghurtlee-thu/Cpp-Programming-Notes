// ���ڽ��ⴿ�麯���ͳ�����
#include <iostream>

using namespace std;

class student
{
public:
    virtual void vacation() = 0; // ���麯��
};

class high_school_student : public student // ����������
{
};

class college_student : public student // ��ȷ��������
{
public:
    void vacation()
    {
        cout << "�� �� �� ʳ" << endl;
    }
};

int main()
{
    // student s; // ����,����Ϊ�����ഴ��ʵ��
    // high_school_student h;
    college_student c;

    cout << sizeof(student) << endl;
    return 0;
}