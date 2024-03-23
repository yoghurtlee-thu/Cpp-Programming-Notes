#pragma once
#include <iostream>
#include <string>
#include <vector>

using namespace std;

class staff;
class admin;

class staff
{
public:
	string name;
	int age;
	char gender;
	void change_my_pswd()
	{
		string line;
		while (true)
		{
			cout << "Please input your password: ";
			cin >> line;
			if (line != this->pswd)
			{
				cout << "Wrong password, please try again." << endl;
			}
			else
			{
				break;
			}
		}
		while (true)
		{
			string newp;
			cout << "Please input your new password: ";
			cin >> newp;
			cout << "Please input your new password again: ";
			cin >> line;
			if (newp != line)
			{
				cout << "The two passwords are not the same, please try again." << endl;
			}
			else
			{
				this->pswd = newp;
				cout << "Password changed successfully." << endl;
				break;
			}
		}
		return;
	}
	virtual void change_pswd(staff &s)
	{
		cout << "Sorry, you don't have the permission to change" << s.name << "'s password!" << endl;
		return;
	}
	friend class admin;
protected:
	int id;
private:
	string pswd;
};

class admin : public staff
{
public:
	string job;
	void change_pswd(staff &s)
	{
		string line;
		while (true)
		{
			cout << "Please input " << s.name << "'s password: ";
			cin >> line;
			if (line != s.pswd)
			{
				cout << "Wrong password, please try again." << endl;
			}
			else
			{
				break;
			}
		}
		while (true)
		{
			string newp;
			cout << "Please input " << s.name << "'s new password: ";
			cin >> newp;
			cout << "Please input " << s.name << "'s new password again: ";
			cin >> line;
			if (newp != line)
			{
				cout << "The two passwords are not the same, please try again." << endl;
			}
			else
			{
				s.pswd = newp;
				cout << "Password changed successfully." << endl;
				break;
			}
		}
		return;
	}
};