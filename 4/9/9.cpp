#include <iostream>
using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");
    char dev;
    int a, b, c, d;
    cout << "������� ������ �����: ";
    cin >> a >> dev >> b;
    cout << "������� ������ �����: ";
    cin >> c >> dev >> d;
    cout << "\n����� ������ �����: " << (a * d) + (b * c) << "/" << b * d << endl;
}