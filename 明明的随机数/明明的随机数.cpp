#include<iostream>
#include<stdlib.h>
#include<algorithm>

using namespace std;
int main()
{
	int n;
	while (cin >> n)
	{
		int array[n];
		for (int i = 0; i < n; i++)
		{
			cin >> array[i];
		}
		sort(array, array + n);
		for (int i = 1; i < n; i++)
		{
			if (array[i] == array[i - 1])
				array[i - 1] = 999999;
		}
		for (int i = 0; i < n; i++)
		{
			if (array[i] < 999999)
				cout << array[i] << endl;
		}

	}
}