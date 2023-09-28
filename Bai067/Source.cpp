#include <iostream>
using namespace std;
int ifExistOddDigit(int);

int main()
{
	cout << "nhap n = ";
	int n;
	cin >> n;

	int flag;
	flag = ifExistOddDigit(n);

	if (flag == 1)
		cout << "TT so le";
	else
		cout << "khong TT so le";

	return 0;
}

int ifExistOddDigit(int nn)
{
	int flag = 0;
	int t = nn;
	while (t != 0)
	{
		int dv = t % 10;
		if (dv % 2 != 0)
			flag = 1;
		t = t / 10;
	}
	return flag;
}