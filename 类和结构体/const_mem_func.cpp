// todo: 本节讲解常量成员函数和常量成员变量
#include <iostream>
#include <string>

using namespace std;

class ppl
{
public:
    ppl(const int &a, const string &c) : age(a), character(c) {}
    int age;
    const string character; // 常成员
    const void time_pass()
    {
        cout << character << endl; // 可以访问，但是不能修改
        // character = ""; // !错误，不能修改常量成员变量
        age = 0; // 正确，可以修改非常量成员变量
    };
};

int main()
{
    ppl p(20, "abc");
    p.time_pass();
    return 0;
}