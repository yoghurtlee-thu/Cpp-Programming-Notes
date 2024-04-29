#include <iostream>
#include <vector>

using namespace std;

vector<int> table;
vector<int> dp;

int main()
{
    int N, T;
    cin >> N >> T;
    table.resize(N);
    dp.resize(T + 1, 0);
    for (int i = 0; i < N; i++)
    {
        cin >> table[i];
    }
    for (int i = 1; i <= T; i++)
    {
        for (int j = 0; j < N; j++)
        {
            if (table[j] <= i)
            {
                dp[i] = max(dp[i], dp[i - table[j]] + table[j]);
            }
        }
    }
    cout << dp[T] << endl;
    return 0;
}