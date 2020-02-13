#include<bits/stdc++.h>
using namespace std;

int q[100000];
void quick_sort(int q[],int l,int r)
{
    if(l>=r)return;
    int i=l-1,j=r+1;
    int temp=q[l+r>>1];
    while(i<j)
    {
       do i++;  while(q[i]<temp);//不可以是<=
       do j--;  while(q[j]>temp);//不可以>=会死循环
        if(i<j)swap(q[i],q[j]);

    }
    quick_sort(q,l,j);
    quick_sort(q,j+1,r);
}
int main()
{
    int n;
    while(cin>>n)
    {

    for(int i=0;i<n;i++)scanf("%d",&q[i]);
    for(int i=0;i<n;i++)printf("%d,",q[i]);
    quick_sort(q,0,n-1);


    for(int i=0;i<n;i++)printf("%d,",q[i]);
    }
}