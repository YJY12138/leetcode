#include<stdc++.h>
#include<vector>
using namespace std;
//快慢指针
 int removeDuplicates(vector<int>& nums) {
        int slow=0,fast=1;
        int len=nums.size();
        if(len==0)
        return 0;
        while(fast<len)
        {
       
            if(nums[slow]==nums[fast])
            {
                  fast++;
            }
            else if(nums[slow]<nums[fast])
            {
                slow++;
                nums[slow]=nums[fast];
                fast++; 
            }
        }
        return slow+1;
    }
  

int main()
{

int n[] = {0,0,1,1,1,2,2,3,3,4} ;
int len=sizeof(n)/sizeof(n[0]);
vector<int> nums(n,n+len);
cout<<removeDuplicates(nums)<<endl;
system("pause");
}