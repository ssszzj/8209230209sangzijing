#include<iostream>
using namespace std;
int main()
{
	double pi = 0, a = 1, b = 1;
	while (1 / a >= 1e-6)
	{
		pi += 1 / a * b;
		a += 2;
		b = -b;
	}
	pi = pi * 4;
	int r, h;
	cout << "����Բ׶�׵İ뾶Ϊ��";
	cin >>r;
	cout << "����Բ׶��׶��Ϊ��";
	cin >> h;
	double V = (1.0 / 3) * r * r * h * pi;
	cout << V;

	return 0;
}
