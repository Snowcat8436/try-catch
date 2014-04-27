#include<iostream>
#include<string>
using namespace std;

string printnum(int num, int digit)
{
	if(num == 0)
		return "";
	else if(num == 1)
	{
		if(digit == 1)
			return "ÀÏ";
		else
			return "";
	}
	else if(num == 2)
		return "ÀÌ";
	else if(num == 3)
		return "»ï";
	else if(num == 4)
		return "»ç";
	else if(num == 5)
		return "¿À";
	else if(num == 6)
		return "À°";
	else if(num == 7)
		return "Ä¥";
	else if(num == 8)
		return "ÆÈ";
	else if(num == 9)
		return "±¸";

}

void printhan(int num)
{
	if(num/1000 != 0)
		cout << printnum(num/1000,1000) << "Ãµ ";
	num = num % 1000;
	if(num/100 != 0)
		cout << printnum(num/100,100) << "¹é ";
	num = num % 100;
	if(num/10 != 0)
		cout << printnum(num/10,10) << "½Ê ";
	num = num % 10;
	cout << printnum(num,1) << "";
}

int main()
{
	int number;
	cin >> number;

	int man = number / 10000;
	number = number % 10000;

	if(man != 0)
	{
		printhan(man);
		cout << "¸¸ ";
	}

	printhan(number);
	return 0;
}