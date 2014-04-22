#include<iostream>
#include<vector>
#include<algorithm>
#include <cmath>
using namespace std;

int main()
{
	vector<char> sets;
	for(int i=0; i<4; i++)
	{
		char temp;
		cin >> temp;
		sets.push_back(temp);
	}

	sort(sets.begin(),sets.end());

	cout << pow(2,sets.size()) << endl;

	for(int i=0; i<4; i++)
		cout << sets[i] << endl;

	for(int i=0; i<4; i++)
		for(int j=i+1; j<4; j++)
			cout << sets[i] <<" "<< sets[j] << endl;

	for(int i=3; i>=0; i--)
	{
		for(int j=0; j<4; j++)
		{
			if(j!=i)
				cout << sets[j] << " ";
		}
		cout << endl;
	}
	
	for(int i=0; i<4; i++)
		cout << sets[i] << " ";
	cout << endl;
}