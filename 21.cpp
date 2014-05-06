#include<iostream>
#include<string>
using namespace std;

int main()
{
	string sinput;
	string output = "";
	getline(cin,sinput);
	for(int i = 0; i<sinput.length(); i++) {
		if(sinput[i] == ' ') {
			cout << string(output.rbegin(),output.rend()) << " ";
			output = "";
		}
		output.append(1,sinput[i]);
	}
	cout << string(output.rbegin(),output.rend()) << endl;
	return 0;
}