#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int N, pic, des, q;
    cin >> N;
    vector<vector<int>> matrix(N, vector<int>(N));
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            cin >> matrix[i][j];
        }
    }
    cin >> pic >> des >> q;

    vector<int> dp(N, 0), dp_old(N, 0);
    dp_old[pic] = 1;
    for (int k = 1; k <= q; k++)
    {
        for (int i = 0; i < N; i++)
        {
            for (int j = 0; j < N; j++)
            {
                if (matrix[j][i] == 1)
                {
                    dp[i] += dp_old[j];
                }
            }
        }
        dp_old = dp;
        fill(dp.begin(), dp.end(), 0);
    }
    cout << dp_old[des] << endl;
    return 0;
}