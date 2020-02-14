#include <stdc++.h>
#include <vector>
using namespace std;
int maxSubArray1(vector<int> nums)
{
	if (nums.size() == 0)
		return 0;
	int temp = 0;
	for (int i = 0; i < nums.size() - 1; i++)
	{
		int sum1 = 0;
		for (int j = i; j < nums.size() - 1; j++)
		{
			sum1 += nums[j];
		}

		if (sum1 >= temp)
			temp = sum1;
	}
	return temp;
}
int main()
{
	vector<int >nums;
	int n;
	while (cin >> n)
	{
		nums.push_back(n);
	}
	for (int i = 0; i < nums.size() - 1; i++)
		cout << nums[i];
	cout << maxSubArray1(nums) << endl;

	system("pause");
}