#include<iostream>
#include<string>
using namespace std;

bool ispal(string str)
{
	string rstr = string(str.rbegin(), str.rend());
	if (str == rstr)
		return true;
	else
		return false;
}

int main()
{
	string str;
	cin >> str;
	int strlen = str.size();
	
	if(strlen % 2 != 0)
		strlen--;

	for(int i=0; ; i++)	{
		for(int j=0; j+strlen <= str.size(); j++) {
			if(ispal(str.substr(j,strlen)))	{
				cout << str.substr(j,strlen);
				return 0;
			}
		}

		if(strlen != 2) {
			strlen -= 2;
			i=-1;
			continue;
		}
		else
			break;
	}
	cout << "";
	return 0;
}