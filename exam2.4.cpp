#include<iostream>
using namespace std;
int main()
{
	double a, b;
	char x;
	cout << "������һ����ʽ��";
	cin >> a >> x >> b ;
	int m;
	m = x;
	double n;
	switch (m)
	{
	case'+':
	{
		n = a + b;
		cout << n << endl;
		break;
	}
	case'/':
	{if (b != 0)
	{
		n = (double)a / b;
		cout << n << endl;
		break;
	}
	else {
		cout << "����ʱ��ĸ����Ϊ0" << endl;
		break;
	}
	}
	case'%':
	{
		n = (int)a % (int)b;
		cout << n << endl;
		break;
	}
	case'*':
	{
		n = a * b;
		cout << n << endl;
		break;
	}
	case'-':
	{
		n = a - b;
		cout << n << endl;
		break;
	}
	default:
	{
		cout << "����" << endl;
	}
	}
	return 0;
}
