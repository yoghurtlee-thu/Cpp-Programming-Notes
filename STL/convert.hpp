// 闲着没事写一个通用类型转换函数（假设可以）
#include <sstream>

template <typename in, typename out>
out convert(const in &input)
{
    static std::stringstream ss; // 避免每次都创建 stringstream
    ss.str("");
    ss.clear(); // 清空状态位
    out output;
    ss << input;
    ss >> output;
    return output;
}

// 下面写一个只需要convert<type>(input)即可的函数
template <typename out>
out convert2(const std::string &input)
{
    return convert<std::string, out>(input);
}