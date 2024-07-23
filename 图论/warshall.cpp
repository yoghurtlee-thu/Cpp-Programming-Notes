#include <iostream>
#include <vector>
using namespace std;

// struct Adja
// {
//     vector<int> neig;
//     vector<int> weight;
//     Adja *next;
// };

int logic_add(const int &a, const int &b)
{
    return (a + b)? 1 : 0;
}

int main()
{
    int n;
    vector<vector<int>> graph; // 假装初始化了一个图的关联矩阵
    for (int j = 0; j < n; j++)
    {
        for (int i = 0; i < n && i != j; i++)
        {
            if (graph[i][j])
            {
                for (int k = 0; k < n; k++)
                {
                    graph[i][k] = logic_add(graph[i][k], graph[j][k]);
                }
            }
        }
    }
    return 0;
}