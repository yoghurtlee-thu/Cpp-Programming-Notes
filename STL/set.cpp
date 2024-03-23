// 本节讲解set容器
#include <iostream>
#include <set>

using namespace std;

int main()
{
    // 下面是我做过的一个示例，让我们浅浅感受一下set的威力
    int N, M;
    cin >> N >> M;
    set<int> s;
    for (int i = 0; i < N; i++)
    {
        int temp;
        cin >> temp;
        s.insert(temp);
    }
    for (int i = 0; i < M; i++)
    {
        int temp;
        cin >> temp;
        s.erase(temp);
    }
    if (s.empty())
    {
        cout << "ALL" << endl;
    }
    else
    {
        for (auto &i : s)
        {
            cout << i << " ";
        }
        cout << endl;
    }
    return 0;
}