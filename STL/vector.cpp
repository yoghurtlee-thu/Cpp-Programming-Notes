// TODO：本节讲解 vector
#include <iostream>
#include <vector>

// template <class T, class Alloc = std::allocator<T>>
// class vector;

int main()
{
    std::vector<int> v;
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);
    for (auto &i : v)
    {
        std::cout << i << std::endl;
    }

    return 0;
}