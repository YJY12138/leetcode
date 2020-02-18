#include<iostream>
#include<string>
using namespace std;
int len(string str)
{
	int l = str.length() - 1;
	int count = 0;
	for (int i = l; i >= 0; i--)
	{

		if (str[i] == ' ')
			break;
		else
			count++;

	}
	return count;
}
int main()
{
	string str;
	getline(cin, str);
	cout << len(str) << endl;

}