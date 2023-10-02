#include <iostream>
using namespace std;
void Nhap(float &, float &, float &);
int Xuly(float, float, float);

int main()
{
	float a, b, c;
	Nhap(a, b, c);
	if (Xuly(a, b, c) == 1)
		cout << "La tam giac";
	else
		cout << "Khong la tam giac";

	return 0;
}

void Nhap(float &aa, float &bb, float &cc)
{
	cout << "Nhap x = ";
	cin >> aa;
	cout << "Nhap y = ";
	cin >> bb;
	cout << "Nhap z = ";
	cin >> cc;
}

int Xuly(float aa, float bb, float cc)
{
	if ((aa + bb > cc) && (aa + cc > bb) && (bb + cc > aa))
		return 1;
	return 0;
}