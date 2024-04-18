// 本节讲解一个最简单的排序算法：选择排序
#include <iostream>

using namespace std;

int beg[5] = {0};
int env[5] = {0};

int main()
{
	for (int i = 0; i < 5; i++)
	{
		cin >> beg[i];
	}
	for (int i = 0; i < 5; i++)
	{
		int tmp = beg[i];
		int dex = i;
		for (int j = 0; j < 5; j++)
		{
			if (beg[j] > tmp)
			{
				tmp = beg[j];
				dex = j;
			}
		}
		env[i] = tmp;
		beg[dex] = -1;
	}
	for (int i = 0; i < 5; i++)
	{
		cout << env[i] << " ";
	}
}