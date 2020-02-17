#include<iostream>
#include<string>
#include<vector>
using namespace std;
bool isenglish(char a)
{
	if ((a <= 90 && a >=65) || (a <= 122&& a >=97))return true;
	else return false;
}
int main()
{
	vector<char> abc;
	string input;
	getline(cin, input);
	vector<int >index;
	int len = input.length();
	for (char indexbig = 65, indexsmall = 97; indexbig <= 90 && indexsmall <= 122; indexbig++, indexsmall++)
	{
		for (int i = 0; i < len; i++)
		{
			if (input[i] == indexbig || input[i] == indexsmall)
			{
				abc.push_back(input[i]);
			}
		}
	}
	
	for (int i = 0,k=0; i < len&&k<abc.size(); i++)
	{
		if (isenglish(input[i]))
		{
			cout << abc[k];
			k++;
		}
		else
		cout << input[i];
	}
}