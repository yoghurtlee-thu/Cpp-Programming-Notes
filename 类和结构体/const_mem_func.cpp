// ���ڽ��ⳣ��Ա�����ͳ���Ա����
#include <iostream>
#include <string>

using namespace std;

class ppl
{
public:
	int age;
	const string character; // ��ɽ�׸ģ���������
	const void time_pass()
	{
		cout << character << endl; // �վü�����
		// character = ""; // ���󣬲����޸ĳ���Ա����
		age = 0; // ��ȷ�������޸ķǳ���Ա����
	};
};

const void print(int a) // ����Ҳ�ǿ��Եģ���������һ��ʹ�ó�����
{
	cout << a << endl;
}

int main()
{
	int a = 10;
	print(a);
	return 0;
}