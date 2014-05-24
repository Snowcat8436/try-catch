#include<iostream>
#include<string>
using namespace std;

int main()
{
	string input;
	string result;
	char prev = '\n';
	int count = 0;

	getline(cin,input);

	for(int i=0; i<input.length(); i++)
	{
		if(input[i] != prev)
		{
			if(i!=0)
				cout << count << prev;

			prev = input[i];
			count = 1;
		}
		else
			count++;
	}

	cout << count << prev;

	return 0;
}