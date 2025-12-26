#include<iostream>
using namespace std;

int main() {
	int n,count=0;
	cin >> n >> endl;
	int arr[3];
	for (int i = 0; i < n; i++)
	{
		for (int i = 0; i < 3; i++)
		{
			cin >> arr[i];
		}
		for (int i = 0; i < 3; i++)
		{
			cout << arr[i];
		}
		for (int j = 0; j < 2; j++)
		{
			if (arr[j] == arr[j + 1] == 1)
				count++;
		}
		cout << endl;
		arr[3] = {};
	}
	cout << count;
}
