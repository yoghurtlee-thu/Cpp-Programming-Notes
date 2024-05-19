// TODO：本节讲解元组
#include <iostream>
#include <tuple>

int main()
{
    std::tuple<int, int, int> t(1, 2, 3);

    //! 这是不行的，因为 tuple 的 get 函数只能接受常数
    // for (int i = 0; i < 3; i++)
    // {
    //     std::cout << std::get<i>(t) << std::endl;
    // }
    return 0;
}