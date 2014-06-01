#include<iostream>
#include<string>
using namespace std;

int main()
{
	int r, c;
	int **matrix;
	int *size;
	int *start;
	cin >> r;
	cin >> c;

	matrix = new int*[r];	
	for(int i=0; i<r; i++)
		matrix[i] =new int[c];

	size = new int[c];
	start = new int[c];
	for(int i = 0; i<c; i++)
	{
		size[i] = 0;
		start[i] = -1;
	}

	for(int i=0; i<r; i++)
		for(int j=0; j<c; j++)
			cin >> matrix[i][j];

	for(int j=0; j<c; j++)
	{
		for(int i=0; i<r; i++)
		{
			if(matrix[i][j] == 0)
			{
				if(start[j] = -1)
					start[j] = i;
				size[j]++;
			}
		}
	}

	int tsize = size[0];
	int tstart = start[0];
	int max = size[0];
	int tmax = 0;

	for(int j=1; j<c; j++)
	{
		if(tsize == size[j] && tstart == start[j])
			tmax += size[j];
		else
		{
			tsize = size[j];
			tstart = start[j];
			tmax = size[j];
		}

		if(tmax > max)
			max = tmax;
	}

	cout << max << endl;
	return 0;
}