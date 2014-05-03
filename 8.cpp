#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main()
{
	vector<int> lines;
	int temp;

	for(int i=0; i<3; i++)
	{
		cin >> temp;
		lines.push_back(temp);
	}
	
	sort(lines.begin(),lines.end());
	
	int t1 = lines[0] * lines[0] + lines[1] * lines[1];
	int t2 = lines[2] * lines[2];

	if(t1 > t2)
		cout << "예각" << endl;
	else if(t1 < t2)
		cout << "둔각" << endl;
	else
		cout << "직각" << endl;
	return 0;
}