#include<stdc++.h>
#include<vector>
#include<queue>
using namespace std;
int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
	queue<int >costline;
	queue<int >gasline;
	int n = gas.size();
	for (int i = 0; i < n; i++)
	{
		costline.push(cost[i]);
		gasline.push(gas[i]);
	}
	vector<int > states;
	int flag = 0;
	for (int i = 0; i <n; i++)
	{
		cout << "这是从" << i << "出发" << endl;
		int currentgas = 0;
		cout << "当前gasline队头：" << gasline.front() << endl;
		cout << "当前costline队头：" << costline.front()<< endl;
		cout << gasline.size() << endl;
		cout << costline.size() << endl;
		for (int j = 0; j < n; j++)
		{			
			int temp1 = gasline.front();
			currentgas += temp1;
			int temp2 = costline.front();		
			costline.pop();
			gasline.pop();
			costline.push(temp2);
			gasline.push(temp1);
			
			if (currentgas - temp2 < 0)
			{
				states.push_back(-1);
				flag = -1;
				break;
			}
			else { 
				flag = i; currentgas = currentgas - temp2;
			cout << currentgas<<endl;
			}
	
		}
		if (flag != -1) {
			flag = i; 
		}
	}
	return flag;
}
int main()
{

	int gas[5] = {1,2,3,4,5};
	int cost[] = {3,4,5,1,2};
	vector<int> b(cost, cost + 5);
	vector<int> a(gas, gas + 5);
	cout << canCompleteCircuit(a, b) << endl;
}