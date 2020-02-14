#include <stdc++.h>
#include <vector>
using namespace std;
int maxSubArray1(vector<int> nums)//暴力
{
	int temp = 0;
	if (nums.size() == 0)
		return 0;
	else if (nums.size() == 1)
		return nums[0];
	else {

		for (int i = 0; i < nums.size() - 1; i++)
		{
			int sum1 = 0;
			for (int j = i; j < nums.size() - 1; j++)
			{
				sum1 += nums[j];
				if (sum1 >= temp)
					temp = sum1;
			}

		}
	}
	return temp;
}
int max(int a, int b,int  c)
{
	return a > b ? (a > c ? a : c) : (b > c ? b : c);
}
int fun(vector<int>& nums, int left, int right)
{
	if (left == right)
		return nums[left];
	if (left > right)
		return INT_MIN;
	int mid = (left + right) / 2; int templeft = 0; int tempright = 0;
	int maxleft = fun(nums, left, mid-1);
	int maxright = fun(nums, mid+1, right);


	int  temp = 0;
	for (int i = mid - 1; i >= left; i--)
	{
		//if (templeft + nums[i] > templeft)  逻辑错的
			//templeft += nums[i];
		temp += nums[i];
		templeft = max(templeft, temp);

	}

	for (int i = mid + 1; i <=right; i++)
	{
		temp += nums[i];
		tempright= max(tempright, temp);

	}
	return max(maxleft, maxright, templeft + tempright + nums[mid]);
}
int maxSubArray2(vector<int>& nums)//分治,递归算左右各自最大的值  再算跨越nums【mid】的最大值
//三者取最大
{
	if (nums.size() == 1)return nums[0];
	else return fun(nums, 0, nums.size()-1);
}

int maxSubArray3(vector<int >& nums, int left, int right)//dp
{
	int len = right + 1;
	vector<int > max(len);
	max[0] = nums[0];
	for (int i = 1; i < len; i++)
	{
		if (max[i - 1] > 0)max[i] = nums[i]+max[i-1];
		else max[i] = nums[i];
	}

	return max.back();
}
int main()
{
	vector<int> nums;
	int n;
	while (cin>>n)
	{
		nums.push_back(n);
		if (cin.get() == '\n')
			break;
	}
	cout << maxSubArray3(nums,0,nums.size()-1) << endl;
}