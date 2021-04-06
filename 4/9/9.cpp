#include <iostream>
using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");
    char dev;
    int a, b, c, d;
    cout << "¬ведите первую дробь: ";
    cin >> a >> dev >> b;
    cout << "¬ведите вторую дробь: ";
    cin >> c >> dev >> d;
    cout << "\n—умма дробей равна: " << (a * d) + (b * c) << "/" << b * d << endl;
}