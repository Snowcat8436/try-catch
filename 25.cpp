#include<iostream>
using namespace std;

int main()
{
	int check[50]={0,};
	int size;
	int first,second;

	cin >> size;

	for(int i=0; i<size; i++)
	{
		int input;
		cin >> input;
		check[input-1]++;
	}

	for(int i=0; i<size; i++)
	{
		if(check[i] == 0)
			first = i+1;
		else if(check[i] == 2)
			second = i+1;
	}

	cout << first << " " << second <<endl;
			
	return 0;
}