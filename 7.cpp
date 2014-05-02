#include<iostream>
#include<vector>
#include<cmath>
using namespace std;

int main()
{
	// cout << "2 3 5 7 11" << endl; 
	// cout << "13 17 19 23 29" << endl;
	// cout << "31 37 41 43 47" << endl; 
	// cout << "53 59 61 67 71" << endl;
	// cout << "73 79 83 89 97" << endl;
	// this is easiest solution for this problem.

	vector<int> primes;

	for(int i=2; i<100; i++)
	{
		if( (int)sqrt(i) <= 1)
		{
			primes.push_back(i);
			continue;
		}
		for(int j=2; j<=sqrt(i); j++)
		{
			if(i % j == 0)
				break;
			else
			{
				if(j == (int)sqrt(i))
					primes.push_back(i);
			}
		}
	}

	for(int i=0; i<primes.size(); i++)
	{
		cout << primes[i] << " ";
		if(i%5 == 4)
			cout << endl;
	}
	return 0;
}