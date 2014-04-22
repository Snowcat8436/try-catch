#include<iostream>
#include<string>
using namespace std;

int main()
{
	string str, rstr;
	cin >> str;
	rstr = string(str.rbegin(), str.rend());
	if (str == rstr)
		cout << "TRUE";
	else
		cout << "FALSE";

	return 0;
}