// TODO：本节讲解 map
#include <iostream>
#include <map>
#include <string>

using namespace std;

int main()
{
    map<string, int> m;
    m["hello"] = 1;
    m["world"] = 2;
    for (auto &i : m)
    {
        cout << i.first << " " << i.second << endl;
    }
    return 0;
}