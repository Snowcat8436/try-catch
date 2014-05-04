#include<iostream>
#include<string>
using namespace std;

int main()
{
	string str;
	int num = 0;
	
	getline(cin,str);

	for(int i=0; i<str.length(); i++)
	{
		if(str[i] == ' ')
		{
			cout << num << " ";
			num = 0;
		}
		else
			num++;
	}

	cout << num << endl;

	return 0;
}