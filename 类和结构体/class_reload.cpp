// 本节讲解类的运算符重载
#include <iostream>
#include <string>
#include <algorithm>
#include <vector>

using namespace std;

class student
{
public:
    string name;
    int score;
    bool operator<(const student &other) const
    {
        if (this->score == other.score)
        {
            return this->name < other.name;
        }
        else
        {
            return this->score > other.score;
        }
    }
};

int main()
{
    student s[100];
    sort(s, s + 100);
    // 不要真的运行这个代码，因为实际上没有初始化s
    return 0;
}