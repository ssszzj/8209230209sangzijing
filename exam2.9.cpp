#include<iostream>
using namespace std;
int main()
{
	int i;
	double p = 0.8, a, b, c;
	a = 0;
	c = 1;
	for (i = 2; i <= 100; i = i * 2)
	{
		a = a + p * i;
		b = a / (c);
		c++;
	}
	cout << "ÿ��ƽ����" << b << " Ԫ" << endl;

	return 0;
}