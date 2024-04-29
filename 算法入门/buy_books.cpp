// TODO：本节是一个小练习，可以采用 set 进行薄纱
#include <iostream>
#include <set>

using namespace std;

int main()
{
    set<int> s;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int tmp;
        cin >> tmp;
        s.insert(tmp);
    }
    for (auto &isbn : s)
    {
        cout << isbn << " ";
    }
    return 0;
}