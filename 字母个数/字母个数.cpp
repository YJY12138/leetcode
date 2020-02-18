#include<iostream>
#include<string>
using namespace std;
int nums(string str, char a)
{

	int len = str.length();
	int count = 0;
	if (a >= 65 && a <= 90)
	{
		for (int i = 0; i < len; i++)
		{
			if (a == str[i] || a + 32 == str[i])count++;

		}
		return count;
	}
	else if (a >= 97 && a <= 122)
	{
		for (int i = 0; i < len; i++)
		{
			if (a == str[i] || a - 32 == str[i])count++;

		}
		return count;

	}
	else
	{
		for (int i = 0; i < len; i++)
		{
			if (a == str[i])count++;
		}
		return count;
	}

}
int main()
{
	string str;
	getline(cin, str);
	char a;
	cin >> a;
	cout << nums(str, a);
}