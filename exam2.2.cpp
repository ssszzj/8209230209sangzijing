#include <iostream>
using namespace std;
int main()
{
	double x,y;
	cin>>x;
	if (x > 0 && x < 1)
	{
		y = 3 - x * 2;
		cout << y;
	}
	else if (x >= 1 && x < 5)
	{
		y = 2 / (x * 4) + 1;
		cout << y;
	}
	else if (x >= 5 && x < 10)
	{
		y = x * x;
		cout << y;
	}
	return 0;
}