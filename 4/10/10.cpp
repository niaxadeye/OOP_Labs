#include <iostream>
using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");
    int f, s, p;
    char a = 156;
    cout << "Введите количество фунтов: ";
    cin >> f;
    cout << "Введите количество шиллингов: ";
    cin >> s;
    cout << "Введите количество пенсов: ";
    cin >> p;
    cout << "Десятичных фунтов: "<< a << (float)(f * 20 * 12 + s * 12 + p) / 240 << endl;
}