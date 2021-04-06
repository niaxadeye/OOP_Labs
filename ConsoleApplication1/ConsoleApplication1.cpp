#include<iostream>
#include<conio.h>

using namespace std;
struct sterling
{
	int funt;
	int shilling;
	int pens;
};

int main()
{
	setlocale(LC_CTYPE, "Russian");
	sterling sterling1; sterling1.funt, sterling1.shilling, sterling1.pens;
	double desyatichnujFunt;
	float drobchast;

	cout << "Введите сумму в десятичных фунтах : "; cin >> desyatichnujFunt;

	sterling1.funt = static_cast<int>(desyatichnujFunt);
	drobchast = desyatichnujFunt - sterling1.funt;
	sterling1.shilling = drobchast * 20;
	sterling1.pens = drobchast * 240 - sterling1.shilling * 12;
	cout << "\nСумма в старых фунтах: " << sterling1.funt << '.' << sterling1.shilling << '.' << sterling1.pens;

	_getch();
	return 0;
}