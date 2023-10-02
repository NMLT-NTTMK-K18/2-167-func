#include <iostream>
#include <iomanip>
using namespace std;
void inNamNhuan(int, int);

int main()
{
	int x;
	cout << "Nhap x: ";
	cin >> x;

	int y;
	cout << "Nhap y: ";
	cin >> y;

	cout << "Cac nam nhuan: ";
	inNamNhuan(x, y);

	return 0;
}

void inNamNhuan(int xx, int yy)
{
	int n = xx;
	bool dk1, dk2;

	while (n <= yy)
	{
		dk1 = (n % 4 == 0) && (n % 100 != 0);
		dk2 = n % 400 == 0;
		if (dk1 || dk2)
			cout << setw(5) << n;
		n = n + 1;
	}
}