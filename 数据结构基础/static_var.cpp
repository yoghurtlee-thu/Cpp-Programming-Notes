// ���ڽ��ܾ�̬����
#include <iostream>

using namespace std;

void test01()
{
    int cnt = 0;
    cnt++;
    cout << "test01()�����ѵ���" << cnt << "��" << endl;
}

void test02()
{
    static int cnt = 0;
    cnt++;
    cout << "test02()�����ѵ���" << cnt << "��" << endl;
}

int main()
{
    for (int i = 0; i < 3; i++)
    {
        test01();
        test02();
    }

    return 0;
}