// 本节讲解菱形继承
#include <iostream>

using namespace std;

class gun
{
public:
    string model;     // 型号
    long long id_num; // 序列号
    int range;        // 射程
    void fire()
    {
        cout << "开火" << endl;
    }
};

class Cannon : virtual public gun // 加农炮类
{
};

class Howitzer : virtual public gun // 榴弹炮类
{
};

class Gun_Howitzer : public Cannon, public Howitzer // 加榴炮类,菱形继承
{
};

int main()
{
    Gun_Howitzer gh;
    // gh.id_num = 1145141919810; // 不可以,存在二义性
    gh.Cannon::id_num = 1145141919810;   // 可以,指定访问父类
    gh.Howitzer::id_num = 1919810114514; // 可以,指定访问父类
    // 在我们采用虚继承后:
    cout << "gh.Cannon::id_num = " << gh.Cannon::id_num << endl;
    cout << "gh.Howitzer::id_num = " << gh.Howitzer::id_num << endl;
    return 0;
}