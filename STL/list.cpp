// Todo: 本节讲解 list
#include <algorithm>
#include <iostream>
#include <list>

using namespace std;

int main()
{
    list<int> l;
    l.push_back(1);  // 尾插
    l.push_front(0); // 头插
    if (find(l.begin(), l.end(), 1) != l.end())
    {
        cout << "噫，好！我中了！" << endl;
    }
    auto it = l.begin();
    l.insert(it, 3);

    for (auto &i : l)
    {
        cout << i << endl;
    }
    return 0;
}