#include<bits/stdc++.h>
#include<stack>
using namespace std;
int main()
{
	//stack<char> stk;
 
	string str;
	while(cin>>str)
	{
		int flag=0;
		int len=str.length();
		int top=0;
		for(int i=0;i<len;i+=1)
		{
			char stk[len];
			char ch=str[i];
			if(ch=='('||ch=='{'||ch=='[')
			{
			
			stk[i]=str[i];
			top=i;
			}
			else if(ch==')'||ch=='}'||ch==']')
			{
				if(len%2==0)
				{
					char temp=0;
					temp=stk[top];
					if(temp==str[i]-1)
					flag=1;
					str[top]='\0';
					top=top-1;
				}
				else
				flag=0;
			}
		}
	
		if(flag==1)
		cout<<"true"<<endl;
		else
		cout<<"no"<<endl;			
	}
	return 0;
 } 
