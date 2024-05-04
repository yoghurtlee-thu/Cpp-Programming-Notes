// todo：一个简单的综合除法计算器
#include <iostream>
#include <vector>
using namespace std;

int main()
{
	vector<int> f;
	int n;
	cin >> n;
	f.resize(n + 1);
	for (int i = 0; i <= n; i++)
	{
		cin >> f[i];
	}
	int m;
	cin >> m;
	int rem = 0;
	vector<int> g(n, 0);
	g[n - 1] = f[n];
	for (int i = n - 1; i > 0; i--)
	{
		g[i - 1] = f[i] + m * g[i];
	}
	rem = f[0] + m * g[0];
	cout << rem << endl;
	return 0;
}