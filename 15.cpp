#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
using namespace std;

int main()
{
	string sinput;
	int nums[10]={0};
	int idx = 0;
	
	getline(cin,sinput);
	for(int i=0; i<sinput.length(); i++)
	{
		if(sinput[i] == ' ')
		{
			idx++;			
			continue;
		}
		nums[idx] = (nums[idx] * 10) + (sinput[i] - '0');
	}

	for(int i=0; i<=idx; i++) {
		for(int j=i+1; j<=idx; j++) {
			if(nums[i] > nums[j])
			{
				int temp = nums[i];
				nums[i] = nums[j];
				nums[j] = temp;
			}
		}
	}

	cout << nums[idx-1] << endl;
	return 0;
}