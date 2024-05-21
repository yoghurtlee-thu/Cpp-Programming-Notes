// TODO：本节讲解 STL 的基类输出流——ostream
#include <cstdio>
#include <iostream>
#include <string>

using namespace std;

int main()
{
    string s = "Hello, world!";
    printf("%d, %s", 1, s.c_str()); // C 风格输出
    cout << 1 << ", " << s << endl; // C++ 风格输出
}