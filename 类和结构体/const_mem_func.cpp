// 本节讲解常成员函数和常成员变量
#include <iostream>
#include <string>

using namespace std;

class ppl
{
public:
	int age;
	const string character; // 江山易改，本性难移
	const void time_pass()
	{
		cout << character << endl; // 日久见人心
		// character = ""; // 错误，不能修改常成员变量
		age = 0; // 正确，可以修改非常成员变量
	};
};

const void print(int a) // 这样也是可以的，不过我们一般使用常引用
{
	cout << a << endl;
}

int main()
{
	int a = 10;
	print(a);
	return 0;
}