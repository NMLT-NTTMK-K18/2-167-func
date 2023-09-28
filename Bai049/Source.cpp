#include <iostream>
#include <iomanip>
using namespace std;
void lietKeUocSo(int);

int main()
{
	cout << "Nhap n = ";
	int n;
	cin >> n;

	cout << "Cac uoc so cua " << n << " la: ";
	lietKeUocSo(n);

	return 0;
}

void lietKeUocSo(int nn)
{
	int i = 1;
	while (i <= nn)
	{
		if (nn % i == 0)
			cout << setw(4) << i;
		i = i + 1;
	}
}