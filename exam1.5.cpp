#include<iostream>
#include <iomanip>
using namespace std;
int main()
{
	float F;
	cout << "�����뻪���¶ȣ�";
	cin >> F;
	float C = (F - 32) / 1.8;
	cout << fixed << setprecision(2) << C;
	return 0;
}