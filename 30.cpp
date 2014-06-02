#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
using namespace std;

int main()
{
	string input;
	vector<int> output;
	getline(cin, input);
	int num = 0;

	for (int i = 0; i < input.length(); i++)
	{
		if (input[i] == ',')
		{
			if (find(output.begin(), output.end(),num) == output.end())
				output.push_back(num);
			
			num = 0;
		}
		else
			num = num * 10 + (input[i] - '0');
	}

	if (find(output.begin(), output.end(), num) == output.end())
		output.push_back(num);

	for (int i = 0; i < output.size(); i++)
	{
		cout << output[i];
		if (i != output.size()-1)
			cout << ",";
	}
	cout << endl;

	return 0;
}