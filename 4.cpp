#include <iostream>
#include <string>
using namespace std;

int main()
{
	int cnt;
	string line;

	getline(cin, line);

	for(int i = 0; i < line.length(); ++i) {
		if(line[i] == ' ') {
			cnt = 0;
			continue;
		}
		
		cnt = (cnt * 10) + (line[i] - '0');
	} 

	for(int i=0; ; )
	{
		if(i%3 == 0 && i != 0)
			i+=7;
		else
			i++;

		if( i > cnt)
			break;

		cout << i;

		if( i+3 > cnt)
		{
			cout << endl;
			continue;
		}

		cout << " ";
		cout << i+3;

		if( i+6 > cnt)
		{
			cout << endl;
			continue;
		}

		cout << " ";
		cout << i+6 << endl;

		
	}
}