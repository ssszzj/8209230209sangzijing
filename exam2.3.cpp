#include<iostream>
using namespace std;
int main()
{
	float a, b, c, C;
	cout << "�����������ε������߳���";
	cin >> a >> b >> c; 
	if (a + b <= c || a + c <= b || b + c <= a)
	{
		cout << "���������޷����������Ρ�" << endl;
	}
	else
	{
		C = a + b + c;
		cout << "�������ε��ܳ�Ϊ��" << C << endl;
		if (a == b || a == c || b == c)
		{
			cout << "���������ǵ��������Ρ�" << endl;
		}
		else
		{
			cout << "�������β��ǵ��������Ρ�" << endl;
		}
	}
	return 0;
}