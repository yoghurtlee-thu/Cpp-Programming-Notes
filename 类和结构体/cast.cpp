#include <iostream>

using namespace std;

class stu
{
public:
	stu()
	{
		name = "stu";
		id = 0;
		cout << "stu" << endl;
	}
	string name;
	int id;
};

class cs_stu : public stu
{
public:
	cs_stu()
	{
		c_score = 0;
	}
	int c_score;
};

void printid(stu p)
{
	cout << p.id << endl;
}

int main()
{
	cs_stu cs;
	cout << sizeof(cs) << endl;
	printid(cs);
	return 0;
}