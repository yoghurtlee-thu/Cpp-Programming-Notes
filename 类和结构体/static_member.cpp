// ���ڽ��⾲̬��Ա
#include <iostream>

using namespace std;

class ppl
{
public:
    // static int humanity = 0; // ��̬��Ա�������������ڳ�ʼ��
    static int humanity; // ��̬��Ա����
    int age;             // ��ͨ��Ա����

    static void set_humanity(int h) // ��̬��Ա����
    {
        humanity = h;
    }

    static void set_age(int a)
    {
        // age = a; // ��̬��Ա�������ܷ�����ͨ��Ա����
    }

private:
    static int pri_sta; // ��̬��Ա����������˽�е�
};

int ppl::humanity = 0; // ��̬��Ա������ʼ��
int ppl::pri_sta = 0;  // ˽�еľ�̬��Ա������ʼ��