// 本节讲解多继承
#include <iostream>
#include <string>

using namespace std;

class shengfu
{
public:
    string name;
    char gender;
};

class dingyuan
{
public:
    int martial_arts;
    int loyality;
};

class dongzhuo
{
public:
    int power;
    int ambition;
};

class lvbu : public shengfu, public dingyuan, public dongzhuo
{
private:
    string hufu;
};

int main()
{
    cout << sizeof(lvbu) << endl;
    return 0;
}