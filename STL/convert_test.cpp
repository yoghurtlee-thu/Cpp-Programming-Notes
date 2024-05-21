#pragma once

#include "convert.hpp"
#include <string>

int main()
{
    std::string line = "123";
    int n = convert<std::string, int>(line); // 还可以，但是不够优雅
    int m = convert2<int>(line); // 更优雅
}