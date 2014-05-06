#include<iostream>
#include<string>
using namespace std;

int main()
{
	string sinput;
	getline(cin,sinput);
	int num[6], idx=0;
	for(int i=0; i<sinput.length(); i++) {
		if(sinput[i] == ' ')
			continue;
		else
			num[idx++] = sinput[i] - '0';
	}

	for(int i=0; i<idx; i++) {
		for(int j=i+1; j<idx; j++) {
			if(num[i] < num[j]) {
				int temp = num[i];
				num[i] = num[j];
				num[j] = temp;
			}
		}
	}

	for(int i=0; i<idx; i++) {
		cout << num[i];
	}
	cout << endl;

	return 0;
}