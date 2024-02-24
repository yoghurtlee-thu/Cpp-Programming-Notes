// 本节讲解智能指针

#include <iostream>
#include <memory>

using namespace std;

int main()
{
    unique_ptr<int> up(new int(10));
    cout << *up << endl;
    cout << __cplusplus << endl;
    return 0;
}