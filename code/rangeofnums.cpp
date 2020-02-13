#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,q;
   
    scanf("%d",&n);
    scanf("%d",&q);
    int nums[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&nums[i]);
    }
    int k;
    while(q--)
    {
        scanf("%d",&k);
        int l=0,r=n-1;
        while(l<r)
        {
            int mid=l+r>>1;
            if(nums[mid]>=k)r=mid;
            else
            {
                l=mid+1;
            }                      
        }
        if(nums[l]==k){
            cout<<l<<' ';
            l=0,r=n-1;
            while(l<r)
             {
                int mid=l+r+1>>1;
                if(nums[mid]<=k)l=mid;
                else
                 {
                 r=mid-1;
                }                      
            }
    
              cout<<l<<endl;
        }
        else cout<<-1<<' '<<-1<<endl;
      
      
       
    }

system("pause");
}