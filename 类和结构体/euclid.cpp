// TODO：本节课用面向对象的思想模拟一下欧几里得辗转相除法
#include <iostream>
#include <vector>

using namespace std;

class Polynomial
{
private:
    vector<double> coef; // 系数
    int degree;          // 次数

public:
    Polynomial() // 默认构造函数
    {
        coef.resize(1, 0);
        degree = 0;
    }

    Polynomial(const vector<double> &c) // 有参构造函数
    {
        coef = c;
        degree = c.size() - 1;
    }

    Polynomial(const int &N)
    {
        coef.resize(N + 1, 0);
        degree = N;
    }

    Polynomial operator+(const Polynomial &p) const // 重载加法运算符
    {
        Polynomial res(max(degree, p.degree));
        for (int i = 0; i <= degree; i++)
            res.coef[i] += coef[i];
        for (int i = 0; i <= p.degree; i++)
            res.coef[i] += p.coef[i];
        return res;
    }

    Polynomial operator-(const Polynomial &p) const // 重载减法运算符
    {
        Polynomial res(max(degree, p.degree));
        for (int i = 0; i <= degree; i++)
            res.coef[i] += coef[i];
        for (int i = 0; i <= p.degree; i++)
            res.coef[i] -= p.coef[i];
        return res;
    }

    Polynomial operator*(const Polynomial &p) const // 重载乘法运算符
    {
        Polynomial res(degree + p.degree);
        for (int i = 0; i <= degree; i++)
            for (int j = 0; j <= p.degree; j++)
                res.coef[i + j] += coef[i] * p.coef[j];
        return res;
    }

    bool operator==(const Polynomial &p) const // 重载等于运算符
    {
        if (degree != p.degree)
            return false;
        for (int i = 0; i <= degree; i++)
        {
            double der = coef[i] - p.coef[i];
            if (der > 1e-6 || der < -1e-6)
                return false;
        }
        return true;
    }

    bool operator!=(const Polynomial &p) const // 重载不等于运算符
    {
        return !(*this == p);
    }

    double abs() const // 求模
    {
        double res = 0;
        for (int i = 0; i <= degree; i++)
            res += coef[i] * coef[i];
        return sqrt(res);
    }

    Polynomial &operator=(const Polynomial &p) // 重载赋值运算符
    {
        coef = p.coef;
        degree = p.degree;
        return *this;
    }

    Polynomial &operator*=(const double &p) // 重载乘等于运算符
    {
        for (int i = 0; i < degree; i++)
        {
            coef[i] *= p;
        }
        return *this;
    }

    double operator[](const int &i) // 重载下标运算符
    {
        return coef[i];
    }

    int getDegree() const // 获取次数
    {
        return degree;
    }
};

Polynomial remain(const Polynomial &f, const Polynomial &g) // 求余数
{
    int n = f.getDegree(), m = g.getDegree();
    Polynomial r = f;
    for (int i = n - m; i >= 0; i--)
    {
        double t = r[i + m] / g[m];
        for (int j = 0; j <= m; j++)
            r[i + j] -= t * g[j];
    }
}