#include<iostream>
#include<string>
using namespace std;

int main()
{
	string input;
	int cntZero = 0;
	getline(cin,input);
	string result = "";

	for(int i=0; i<input.length(); i++)
	{
		if(input[i] == '0')
		{
			if(cntZero==2)
			{
				result += input[i-2];
				result += input[i-1];
				result += input[i];				
				cntZero = 0;
			}

			cntZero++;
			
		}
		else
		{
			if(cntZero == 1)
				result += input[i-1];

			result += input[i];
			cntZero = 0;
		}
	}

	cout << result << endl;

	return 0;
}