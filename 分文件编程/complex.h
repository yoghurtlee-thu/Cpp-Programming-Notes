#include <iostream>
#include <cmath>

using namespace std;

class complex
{
    public:
        double re;
        double im;

        complex(double r = 0, double i = 0, int flag = 0)
        {
            switch (flag)
            {
            case 0:
                re = r;
                im = i;
                break;
            
            default:
                re = r * cos(i);
                im = r * sin(i);
                break;
            }
        }

        complex operator+(const complex &c);
        complex operator-(const complex &c);
        complex operator*(const complex &c);
        complex operator/(const complex &c);

        double abs();

        bool operator==(const complex &c);
        bool operator!=(const complex &c);

        complex &operator+=(const complex &c);
        complex &operator-=(const complex &c);
        complex &operator*=(const complex &c);
        complex &operator/=(const complex &c);

        complex &operator++(); // ǰ��++
        complex operator++(int); // ����++

        complex &operator--(); // ǰ��--
        complex operator--(int); // ����--

        complex operator-(); // ȡ��

        complex conj(); // ����
};

ostream &operator<<(ostream &os, const complex &c);