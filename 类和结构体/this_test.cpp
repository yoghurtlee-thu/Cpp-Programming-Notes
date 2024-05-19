#include <iostream>

using namespace std;

class ppl
{
public:
    int age;
    ppl(int a)
    {
        age = a;
    }
    void print()
    {
        cout << "age: " << age << endl;
    }
};

int main()
{
    ppl p1(20);
    ppl p2(30);
    p1.print();
    p2.print();
    return 0;
}