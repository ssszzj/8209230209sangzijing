#include<iostream>
#include<cctype>
using namespace std;
int main()
{
	cout << "������һ���ַ� :  \n";
	char x;
	int a = 0, b = 0, c = 0, d = 0, i;             
	while ((x = getchar()) != '\n')        
	{
		if (x <= 'z' &&x >= 'a' || x <= 'Z' && x >= 'A')
			a++;
		else if (x == ' ')
			b++;
		else if (x <= '9' &&x >= '0')
			c++;
		else
			d++;
	}

	cout << "��ĸ: " << a << endl << "�ո�:  " << b << endl << "����:  " << c << endl << "����: " << d << endl;

	return 0;
}