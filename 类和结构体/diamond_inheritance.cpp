// ���ڽ������μ̳�
#include <iostream>

using namespace std;

class gun
{
public:
    string model;     // �ͺ�
    long long id_num; // ���к�
    int range;        // ���
    void fire()
    {
        cout << "����" << endl;
    }
};

class Cannon : virtual public gun // ��ũ����
{
};

class Howitzer : virtual public gun // ������
{
};

class Gun_Howitzer : public Cannon, public Howitzer // ��������,���μ̳�
{
};

int main()
{
    Gun_Howitzer gh;
    // gh.id_num = 1145141919810; // ������,���ڶ�����
    gh.Cannon::id_num = 1145141919810;   // ����,ָ�����ʸ���
    gh.Howitzer::id_num = 1919810114514; // ����,ָ�����ʸ���
    // �����ǲ�����̳к�:
    cout << "gh.Cannon::id_num = " << gh.Cannon::id_num << endl;
    cout << "gh.Howitzer::id_num = " << gh.Howitzer::id_num << endl;
    return 0;
}