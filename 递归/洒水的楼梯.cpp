// todo: 本节是一个简单的动态规划问题
#include <iostream>

using namespace std;

pair<int, bool> dp[10001] = {make_pair(0, false)};

int main()
{
    int L, M;
    cin >> L >> M;
    dp[1].first = 1;
    for (int i = 0; i < M; i++)
    {
        int tmp;
        cin >> tmp;
        dp[tmp].second = true;
    }
    for (int i = 2; i <= L; i++)
    {
        if (dp[i].second)
        {
            continue;
        }
        dp[i].first = dp[i - 1].first + dp[i - 2].first;
    }
    cout << dp[L].first << endl;
    return 0;
}