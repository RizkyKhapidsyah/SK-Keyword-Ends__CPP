#include <iostream>
#include <conio.h>

using namespace std;

int main() {
	int a, b, c, d;

	cout << "Masukkan Nilai A  : "; cin >> a;
	cout << "Masukkan Nilai B  : "; cin >> b;

	c = a % b;
	d = a * b;

	cout << endl << "Hasil dari C  = " << c << ends;
	cout << endl << "Hasil dari C  = " << d << ends;
	
	_getch();
	return 0;
}