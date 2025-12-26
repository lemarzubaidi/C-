#include <iostream>
#include<vector>
using namespace std;

int main()
{
	int n, m;
	cin >> n>> m;
	vector<int> a[n];
	vector<int>b[m];
	for (int i = 0; i < n; i++)
	{
		cin >> a[i];
	}
	for (int i = 0; i < m; i++)
	{
		cin >> b[i];
	}
	sort(a.begin(), a.end());
	for (int i = 0; i < b.size(); i++)
	{
		int cnt = 0;
		int k = b[i];
		while (!a.size()) {
			if(b[i] >= a[i])
			cnt++;

		}
		cout << cnt << " ";
	}

	return 0;
}
