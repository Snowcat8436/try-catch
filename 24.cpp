#include<iostream>
#include<string>
using namespace std;

int main()
{
	string input;
	int org=0;
	getline(cin, input);
	
	for (int i = 0; i < input.length(); i++)
	{
		if (input[i] == 'F')
			break;
		else
			org = org * 10 + (input[i] - '0');
	}

	cout << (int)((org - 30) / 2) << "C" << endl;
	
	return 0;
}