#include <iostream>
using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");
    double a, b, c, d;
    char oper, slash, ch;

    do {
        cout << "Введите первый операнд, знак операции, второй операнд: ";
        cin >> a >> slash >> b >> oper >> c >> slash >> d;
        switch (oper)
        {
        case '+': a = (a * d + b * c); b = (b * d); break;
        case '-': a = (a * d - b * c); b = (b * d); break;
        case '*': a = (a * c); b = (b * d); break;
        case '/': a = (a * d); b = (b * c); break;
        default: {
            a = 0; b = 0; cout << "Неверно введены данные" << endl;
        }
        }
        if (a != 0 && b != 0)
            cout << "Answer = " << a << slash << b; cout << "\nNext? (y/n) "; cin >> ch;
        cout << endl;
    } while (ch != 'n');
}