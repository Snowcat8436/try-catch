#include<iostream>
using namespace std;

int main()
{
	int num;
	int **matrix;

	cin >> num;
	
	matrix = new int*[num];	
	for(int i=0; i<num; i++)
		matrix[i] =new int[num];
	
	for(int i=0; i<num; i++)
	{
		for(int j=0; j<num; j++)
		{
			cin >> matrix[j][num-i-1];
		}
	}

	for(int i=0; i<num; i++)
	{
		for(int j=0; j<num; j++)
			cout << matrix[i][j] << " ";
		cout << endl;
	}
	return 0;
}