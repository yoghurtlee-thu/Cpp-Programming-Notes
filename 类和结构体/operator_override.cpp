// 本节讲解运算符重载
#include <iostream>

using namespace std;

struct two_D_vec
{
    friend ostream &operator<<(ostream &os, const two_D_vec &vec);
    friend istream &operator>>(istream &is, two_D_vec &vec);
    int x;
    int y;

    two_D_vec operator+(const two_D_vec &other) const
    {
        two_D_vec sum;
        sum.x = this->x + other.x;
        sum.y = this->y + other.y;
        return sum;
    }

    two_D_vec operator-(const two_D_vec &other) const
    {
        two_D_vec diff;
        diff.x = this->x - other.x;
        diff.y = this->y - other.y;
        return diff;
    }

    int operator*(const two_D_vec &other) const
    {
        return this->x * other.x + this->y * other.y;
    }

    // 错误地重载流运算符:
    // ostream &operator<<(ostream &os)
    // {
    //     os << this->x << " " << this->y;
    //     return os;
    // }

    bool operator<(const two_D_vec &other) const
    {
        return this->x * this->x + this->y * this->y < other.x * other.x + other.y * other.y;
    }

    two_D_vec operator++()
    {
        this->x++;
        this->y++;
        return *this;
    }

    two_D_vec operator++(int)
    {
        two_D_vec old = *this;
        this->x++;
        this->y++;
        return old;
    }

    two_D_vec operator=(const two_D_vec &other)
    {
        this->x = other.x;
        this->y = other.y;
        return *this;
    }

    void operator()()
    {
        cout << "x: " << this->x << " y: " << this->y << endl;
    }

};

ostream &operator<<(ostream &os, const two_D_vec &vec)
{
    os << vec.x << " " << vec.y;
    return os;
}

istream &operator>>(istream &is, two_D_vec &vec)
{
    is >> vec.x >> vec.y;
    return is;
}

int main()
{
    two_D_vec a = {1, 2};
    two_D_vec b = {3, 4};
    two_D_vec c = a + b;
    two_D_vec d;

    cin >> d;

    int k = 9;
    k++;

    // two_D_vec d = a.operator+(b);

    cout << c << endl;
    cout << d << endl;

    a(); // 仿函数

    return 0;
}