#include<iostream>
#include<string>
using namespace std;

int main()
{
	string input;
	bool endflag=false;
	int maxsize = 0;
	string maxstr = "";

	while(1)
	{
		cin >> input;

		if(input.at(input.size()-1) != ',')
			endflag = true;
		else
			input.erase(input.end()-1);

		if(maxsize < input.size())
		{
			maxsize = input.size();
			maxstr = input;
		}

		if(endflag)
			break;
	}

	cout << maxstr << endl;
	return 0;
}