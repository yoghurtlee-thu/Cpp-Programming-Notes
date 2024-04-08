#include <iostream>

using namespace std;

class A
{
public:
    int a;
};

A foo1()
{
    A aa;
    cout << "foo1" << hex << &aa << endl;
}