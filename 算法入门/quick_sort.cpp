// 本节讲解快速排序
#include <iostream>
#include <vector>
using namespace std;

// 快排涉及到一点递归，所以需要一个递归函数

void quick_sort(vector<int> &v, int left, int right)
{
    if (left >= right)
    {
        return;
    }
    else if (right - left == 1)
    {
        if (v[left] > v[right]) // 从小到大排序
        {
            swap(v[left], v[right]);
        }
    }
    else
    {
        int sta = v[left]; // 选取第一个数作为标准数
        int i = left + 1;
        int j = right;
        while (i < j)
        {
            if (v[i] > sta && v[j] < sta)
            {
                swap(v[i], v[j]);
                i++;
                j--;
            }
            else if (v[i] <= sta)
            {
                i++;
            }
            else if (v[j] >= sta)
            {
                j--;
            }
        }
        if (v[i] < sta)
        {
            swap(v[left], v[i]);
        }
        quick_sort(v, left, i - 1);
        quick_sort(v, i, right);
    }
}

// 这种思想被称为分治

int main()
{
    vector<int> v = {0};
    int N;
    cin >> N;
    v.resize(N);
    for (int i = 0; i < N; i++)
    {
        int temp;
        cin >> temp;
        v[i] = temp;
    }
    quick_sort(v, 0, N - 1);
    for (auto &i : v)
    {
        cout << i << ' ';
    }
    return 0;
}