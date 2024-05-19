// TODO：本节讲解元组
#include <iostream>
#include <string>
#include <tuple>

int main()
{
    std::tuple<int, int, int> t(1, 2, 3);

    //! 这是不行的，因为 tuple 的 get 函数只能接受常数
    // for (int i = 0; i < 3; i++)
    // {
    //     std::cout << std::get<i>(t) << std::endl;
    // }
    int x;
    std::string y;
    double z;
    std::tie(x, y, z) = std::make_tuple(1, "2", 3.0);
    return 0;
}