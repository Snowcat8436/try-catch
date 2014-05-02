#include<iostream>
#include<string>
#include<vector>
#include<cmath>
using namespace std;

int main()
{
	char cinput;
	int value=0;
	int i = 0;
	int size = -1;
	vector<int> matrix;

	for( ; ; i++)
	{
		cin.get(cinput);

		if(cinput>='0' && cinput<='9')
			value = value*10 + (cinput - '0');
		else if(cinput == ' ')
		{
			matrix.push_back(value);
			value = 0;
		}
		else if(cinput == '\n')
		{
			matrix.push_back(value);
			value = 0;

			if(size == -1)
				size = matrix.size();
			else if(size * size == matrix.size())
				break;				
		}
	}

	size = sqrt(matrix.size());

	for(i=0; i<size; i++)
	{
		for(int j=0; j<matrix.size(); j+=size)
		{
			cout << matrix.at(i+j) << " ";
		}
		cout << endl;
	}


	return 0;
}