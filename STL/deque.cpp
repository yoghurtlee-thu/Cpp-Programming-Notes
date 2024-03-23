// 本节讲解 deque 容器
#include <iostream>
#include <deque>

using namespace std;

int main()
{
    deque<int> dq = {1, 2, 3, 4, 5}; // 初始化

    dq.push_back(6);  // 尾部插入
    dq.push_front(0); // 头部插入

    cout << "dq.front() = " << dq.front() << endl; // 访问头部元素
    cout << "dq.back() = " << dq.back() << endl;   // 访问尾部元素

    dq.pop_back();  // 尾部删除，虽说写了个pop，但是不是弹出，返回值是void
    dq.pop_front(); // 头部删除

    cout << "dq.size() = " << dq.size() << endl;   // 访问大小
    cout << "dq.empty() = " << dq.empty() << endl; // 判断是否为空

    for (auto &i : dq)
    {
        cout << i << endl;
    }
    
    return 0;
}

// 总体而言，deque 容器的操作和 vector 容器的操作基本一致，只是在头部插入和删除的操作上有所不同。