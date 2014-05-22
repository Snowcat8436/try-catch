#include<iostream>
#include<string>
using namespace std;

int main()
{
	int r, c;
	int matrix[20][20];
	cin >> r;
	cin >> c;

	for (int i = 0; i < r; i++)
		for (int j = 0; j < c; j++)
			cin >> matrix[i][j];
	
	for (int i = 1; i < r-1; i++)
		for (int j = 1; j < c - 1; j++)
		{
			if (matrix[i][j] == 1)
			{
				if (matrix[i - 1][j - 1] == 1)
					continue;
				if (matrix[i][j - 1] == 1)
					continue;
				if (matrix[i + 1][j - 1] == 1)
					continue;
				if (matrix[i - 1][j] == 1)
					continue;
				if (matrix[i + 1][j] == 1)
					continue;
				if (matrix[i - 1][j + 1] == 1)
					continue;
				if (matrix[i][j + 1] == 1)
					continue;
				if (matrix[i + 1][j + 1] == 1)
					continue;

				cout << i + 1 << "," << j + 1 << endl;
			}
		}
	return 0;
}