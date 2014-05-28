#include<iostream>
#include<vector>
#include<string>
using namespace std;

int main()
{
	vector<int> arr[2];
	string input;
	int temp = 0;

	for (int i = 0; i < 2; i++)
	{
		getline(cin, input);
		for (int j = 0; j < input.length(); j++)
		{
			if (input[j] == ' ')
			{
				arr[i].push_back(temp);
				temp = 0;
			}
			else
			{
				temp = temp * 10 + (input[j] - '0');
			}
		}
		arr[i].push_back(temp);
		temp = 0;
	}
	int i0=0, i1=0;
	while (true)
	{
		if (i0 == arr[0].size())
		{
			for (int i = i1; i < arr[1].size(); i++)
				cout << arr[1].at(i) << " ";
			break;
		}
		else if (i1 == arr[1].size())
		{
			for (int i = i0; i < arr[0].size(); i++)
				cout << arr[0].at(i) << " ";
			break;
		}
		else if (arr[0].at(i0) < arr[1].at(i1))
			cout << arr[0].at(i0++) << " ";
		else if (arr[0].at(i0) >= arr[1].at(i1))
			cout << arr[1].at(i1++) << " ";
	}
	cout << endl;

	return 0;
}