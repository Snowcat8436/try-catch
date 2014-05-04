#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
using namespace std;

int main()
{
	string input;	
	int idx = 0;
	int start = 0;
	int _long = 1;
	int max_start = 0;
	int max_long = 1;
	int list[10] = {0};

	getline(cin,input);

	for(int i=0; i<input.size(); i++) {
		if(input[i] == ' ') {
			idx++;
			continue;
		}
		list[idx] = list[idx]*10 + (input[i] - '0');
	}

	for(int i=0; i<=idx; i++) {
		for(int j=i+1; j<=idx; j++) {
			if(list[i] > list[j])
			{
				int temp = list[i];
				list[i] = list[j];
				list[j] = temp;
			}
		}
	}

	for(int i=1; i<=idx; i++) {
		if(list[i]-list[i-1] == 1) {
			_long++;
			if(idx >= max_long)
			{
				max_start = start;
				max_long = _long;
			}
		}
		else {			
			start = i;
			_long = 1;
		}
	}

	for(int i=0; i<max_long; i++) {
		cout << list[i+max_start] << " ";
	}
	cout<<endl;

	return 0;
}