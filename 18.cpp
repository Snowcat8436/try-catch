#include<iostream>
#include<string>
using namespace std;

int main()
{
	int idx;
	int nums[1023] = { 0 };
	cin >> idx;

	for (int i = 0; i < idx; i++)
	{
		cin >> nums[i];
	}

	for (int i = 0; i < idx; i++)
	{
		for (int j = i + 1; j < idx; j++)
		{
			if (nums[i] > nums[j])
			{
				int temp = nums[i];
				nums[i] = nums[j];
				nums[j] = temp;
			}			
		}
	}

	cout << nums[(int)(idx / 2)] << endl;
	return 0;
}