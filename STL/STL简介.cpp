#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    vector<int> v = {1, 2, 3, 4, 5};
    vector<int>::iterator it = v.begin(); // 起始迭代器
    for (; it != v.end(); it++) // 看着很奇怪，实际上也确实挺奇怪的（
    {
        cout << *it << " ";
    }
    cout << endl;

    for_each(v.begin(), v.end(), [](int i)
             { cout << i << " "; }); // for_each算法，第三个参数是一个函数对象，可以是函数指针，也可以是lambda表达式

    // 我最喜欢的写法：
    for (auto &i : v) // auto自动推导类型，如果你知道类型，可以直接写成 int i
    {
        cout << i << " ";
    }
    cout << endl;
}