#include <iostream>
using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");
    int pounds;
    int shillings;
    int pence;
    double oldpounds;
    char a = 156;
    cout << "Введите сумму в десятичных фунтах: ";

    cin >> oldpounds;

    pounds = static_cast<int>(oldpounds); // фунты

    double frac = oldpounds - pounds; 

    shillings = frac * 20; // шиллинги

    pence = frac*240 - shillings*12; // пенсы

    cout << "Сумма в старых фунтах: "<< a << pounds << '.' << shillings << '.' << pence << endl;
}