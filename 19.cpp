#include<iostream>
#include<string>
#include<vector>
using namespace std;

int main()
{
	string sinput;
	int mnums[30] = {0};
	int midx=0;
	int znum = 0;
	int pnums[30] = {0};
	int pidx=0;
	int tnum = 0;
	bool sign = true;

	getline(cin,sinput);

	for(int i=0; i<sinput.length(); i++)
	{
		if(sinput[i] == ' ')
		{
			if(tnum > 0)
			{
				if(sign)
					pnums[pidx++] = tnum;
				else
					mnums[midx++] = -1 * tnum;
			}				
			else
				znum++;

			sign = true;
			tnum = 0;
			continue;
		}
		else if(sinput[i] == '-')
		{
			sign = false;
			continue;
		}
		
		tnum = (tnum*10) + (sinput[i] - '0');
	}

	if(tnum > 0)
	{
		if(sign)
			pnums[pidx++] = tnum;
		else
			mnums[midx++] = -1 * tnum;
	}				
	else
		znum++;


	for(int i=0; i<midx; i++)
		cout << mnums[i] << " ";
	for(int i=0; i<znum; i++)
		cout << "0 ";
	for(int i=0; i<pidx; i++)
		cout << pnums[i] << " ";
	cout << endl;

	return 0;
}