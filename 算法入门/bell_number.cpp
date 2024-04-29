#include <iostream>

using namespace std;

int dp_1[1000][1000] = {0}; // dp_1 的第 n 行第 k 列表示二项式系数 C(n, k)
int dp_2[1000] = {0};       // dp_2 的第 n 个元素表示第 n 个贝尔数

int binary(int n, int k)
{
    if (k == 0 || k == n)
    {
        return 1;
    }
    else if (dp_1[n][k] != 0)
    {
        return dp_1[n][k];
    }
    int ret = binary(n - 1, k - 1) + binary(n - 1, k);
    dp_1[n][k] = ret;
    return ret;
}

int bell(int N)
{
    if (N == 1 || N == 0)
    {
        return 1;
    }
    else if (dp_2[N] != 0)
    {
        return dp_2[N];
    }
    int ret = 0;
    for (int i = 0; i < N; i++)
    {
        ret += binary(N - 1, i) * bell(i);
    }
    dp_2[N] = ret;
    return ret;
}

int main()
{
    int N;
    cin >> N;
    cout << bell(N) << endl;
    return 0;
}