// todo：本节讲解 deque 容器的《高级》操作
#include <iostream>
#include <deque>
#include <algorithm>

using namespace std;

int main()
{
    // 1. 初始化
    deque<int> dq1, dq2, dq3;
    dq1.assign(5, 1);                   // 用 5 个 1 初始化 dq2
    dq2 = dq1;                          // 重载赋值运算符
    dq3.assign(dq1.begin(), dq1.end()); // 用迭代器初始化

    // 2. 大小相关
    dq1.empty(); // 判断是否为空
    dq1.clear(); // 清空
    dq1.size();  // 返回元素个数
    // dq1.capacity();    // !错误，deque 容器没有 capacity 方法

    dq1.resize(10);    // 重新分配空间
    dq1.resize(15, 2); // 重新分配空间，多余的元素用 2 填充
    dq1.resize(5);     // 重新分配空间，多余的元素被删除

    // 3. 插入和删除，由于 deque 是双头数组，因此其在头/尾部插入和删除的效率都很高
    dq1.insert(dq1.begin(), 0);                          // 在头部插入
    dq1.insert(dq1.end(), 6);                            // 在尾部插入
    dq1.insert(dq1.begin() + 2, 3, 3);                   // 在指定位置插入多个元素
    dq1.insert(dq1.begin() + 3, dq2.begin(), dq2.end()); // 在指定位置插入另一个 deque 容器的元素

    dq1.erase(dq1.begin());                      // 删除头部元素
    dq1.erase(dq1.begin() + 2);                  // 删除指定位置元素
    dq1.erase(dq1.begin() + 2, dq1.begin() + 4); // 删除指定范围元素

    dq1.push_back(6);  // 尾部插入
    dq1.push_front(0); // 头部插入
    dq1.pop_back();    // 尾部删除
    dq1.pop_front();   // 头部删除

    // 3. 一些其他方法
    dq1.swap(dq2);                // 交换两个 deque 容器，是的，deque 容器也有 swap 方法
    dq1.front();                  // 访问头部元素
    dq1.back();                   // 访问尾部元素
    dq1.at(2);                    // 访问指定位置元素
    sort(dq1.begin(), dq1.end()); // 排序
}