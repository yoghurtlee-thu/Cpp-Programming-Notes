// todo: 本节从阶乘入手讲解递归
#include <iostream>

using namespace std;

int foo(const int &N)
{
    if (N == 1)
        return 1;
    return N * foo(N - 1);
}

int main()
{
    int N;
    cin >> N;
    cout << foo(N) << endl;
    return 0;
}