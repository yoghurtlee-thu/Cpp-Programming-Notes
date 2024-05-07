#include "complex.h"

complex complex::operator+(const complex &c)
{
    return complex(re + c.re, im + c.im);
}

complex complex::operator-(const complex &c)
{
    return complex(re - c.re, im - c.im);
}

complex complex::operator*(const complex &c)
{
    return complex(re * c.re - im * c.im, re * c.im + im * c.re);
}

complex complex::operator/(const complex &c)
{
    return complex((re * c.re + im * c.im) / (c.re * c.re + c.im * c.im), (im * c.re - re * c.im) / (c.re * c.re + c.im * c.im));
}

double complex::abs()
{
    return sqrt(re * re + im * im);
}

bool complex::operator==(const complex &c)
{
    return (re - c.re < 1e-6) && (im - c.im < 1e-6);
}

bool complex::operator!=(const complex &c)
{
    return (re != c.re) || (im != c.im);
}

complex &complex::operator+=(const complex &c)
{
    re += c.re;
    im += c.im;
    return *this;
}

complex &complex::operator-=(const complex &c)
{
    re -= c.re;
    im -= c.im;
    return *this;
}

complex &complex::operator*=(const complex &c)
{
    double tmp = re;
    re = re * c.re - im * c.im;
    im = tmp * c.im + im * c.re;
    return *this;
}

complex &complex::operator/=(const complex &c)
{
    double tmp = re;
    re = (re * c.re + im * c.im) / (c.re * c.re + c.im * c.im);
    im = (im * c.re - tmp * c.im) / (c.re * c.re + c.im * c.im);
    return *this;
}

complex &complex::operator++()
{
    re++;
    return *this;
}

complex complex::operator++(int)
{
    complex tmp = *this;
    re++;
    return tmp;
}

complex &complex::operator--()
{
    re--;
    return *this;
}

complex complex::operator--(int)
{
    complex tmp = *this;
    re--;
    return tmp;
}

complex complex::operator-()
{
    return complex(-re, -im);
}

complex complex::conj()
{
    return complex(re, -im);
}

ostream &operator<<(ostream &os, const complex &c)
{
    os << c.re << " + " << c.im << "i";
    return os;
}