#include <iostream>
using namespace std;
int main()
{
	int n, br = 0;
	cin >> n;
	int arr[1024];
	if (n >= 5 && n <=20)
	{
		for (int i = 0; i < n; i++)
		{
			cin >> arr[i];
		}
		int max = arr[0];
		for (int i = 0; i < n; i++)
		{
			if (arr[i] > max)
			{
				max = arr[i];
			}
		}
		cout << max << " ";
		for (int i = 0; i < n; i++)
		{
			if (arr[i]==max)
			{
				br++;
			}
		}
		cout << br << endl;

	}
}

