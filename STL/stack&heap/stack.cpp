// todo: 本节讲解栈容器
#include <iostream>
#include <stack>

using namespace std;

int main()
{
    stack<int> stk;
    for (int i = 0; i < 5; i++)
    {
        stk.push(i); // 入栈
    }
    stk.pop();   // 出栈
    stk.empty(); // 判断是否为空
    stk.size();  // 获取栈的大小
    stk.top();   // 获取栈顶元素
    return 0;
}