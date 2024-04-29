#include <iostream>
#include <vector>
using namespace std;

int coins[101] = {0}; // 硬币和面额
vector<int> dp = {0};

int main()
{
    int N, A;
    cin >> N >> A;
    dp.resize(A + 1, 114514);
    for (int i = 1; i <= N; i++)
    {
        cin >> coins[i];
    }
    for (int i = 1; i <= A; i++)
    {
        for (int j = 1; j <= N; j++)
        {
            if (coins[j] <= i)
            {
                dp[i] = min(dp[i], dp[i - coins[j]] + 1);
            }
        }
    }

    int res = (dp[A] == 114514)?-1 : dp[A];
    cout << res << endl;
    return 0;
}