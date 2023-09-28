#include <iostream>
#include <iomanip>
using namespace std;
void lietKeUocSoLe(int);

int main()
{
	cout << "Nhap n = ";
	int n;
	cin >> n;

	cout << "Cac uoc so le cua " << n << " la: ";
	lietKeUocSoLe(n);

	return 0;
}

void lietKeUocSoLe(int nn)
{
	int i = 1;
	while (i <= nn)
	{
		if (nn % i == 0)
			cout << setw(4) << i;
		i = i + 2;
	}
}