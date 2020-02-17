#include<stdc++.h>
using namespace std;
int flag[100000] = {0};
/*int singleNumber(vector<int>& nums) {//用数组下标记录次数无法解决负数问题。
	int max = 0;
	for (int i = 0; i < nums.size(); i++)
	{
		if (max < nums[i])
			max = nums[i];
		flag[nums[i]] += 1;
	}
	for (int i = 0; i <= max; i++)
	{
		if (flag[i] % 2 != 0)
			return i;
	}
}*/
int singleNumber(vector<int>& nums) {//异或交换律
	
	int ans = nums[0];
	if (nums.size() > 1) {
		for (int i = 1; i < nums.size(); i++) {
			ans = ans ^ nums[i];
		}
	}
	return ans;
}

int main()
{
	int n;

	while (cin>>n)
	{
		int f = 0;
		vector<int > num;
		for (int i = 0; i < n; i++)
		{
			scanf_s("%d", &f);
			num.push_back(f);
		}
		for (int i = 0; i < n; i++)
		{
			cout << num[i] << ' ';
		}
		cout << endl;
		cout << singleNumber(num) << endl;
	}
}