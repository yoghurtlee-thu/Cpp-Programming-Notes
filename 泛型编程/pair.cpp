#include <iostream>
#include <utility>

using std::pair, std::cout, std::endl;

// template<typename T1,typename T2>
// class pair
// {
// public:
//     T1 first;
//     T2 second;
// };

int main()
{
    pair<int, int> p(1, 1);
    cout << p.first << ' ' << p.second << endl;
    p = std::make_pair(2, 3);
}