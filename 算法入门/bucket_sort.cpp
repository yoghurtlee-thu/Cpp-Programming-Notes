// 本节讲解桶排序
#include <iostream>

using namespace std;

int main()
{
    int score[11] = {0};
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int tmp;
        cin >> tmp;
        score[tmp]++;
    }
    for (int i = 0; i < 11; i++)
    {
        for (int j = 0; j < score[i]; j++)
        {
            cout << i << " ";
        }
    }
    return 0;
}