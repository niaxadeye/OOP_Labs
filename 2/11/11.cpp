#include <iostream>
using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");
    char dot, ch, sign;
    int op1, op2, op3, lb1, shilling1, penny1, lb2, shilling2, penny2, number;

    cout << "������� ������ �����: ";
    cin >> lb1 >> dot >> shilling1 >> dot >> penny1;
    cout << "\n������� ��������: ";
    cin >> sign;
    if (sign == '*')
    {
        cout << "\n������� ����� �� ������� ����� �������� �����: ";
        cin >> number;
    }
    else
    {
        cout << "\n������� ������ �����: ";
        cin >> lb2 >> dot >> shilling2 >> dot >> penny2;
    }
    switch (sign)
    {
    case '+':
    {
        op1 = lb1 + lb2;
        op2 = shilling1 + shilling2;
        op3 = penny1 + penny2;
    }  break;
    case '-':
    {
        op1 = abs(lb1 - lb2);
        op2 = abs(shilling1 - shilling2);
        op3 = abs(penny1 - penny2);
    }  break;
    case '*':
    {
        op1 = lb1 * number;
        op2 = shilling1 * number;
        op3 = penny1 * number;
    }  break;
    default:cout << "�� ����� �������� ����";

    }
    if (op3 / 12 > 0)
    {
        op2 += op3 / 12;
        op3 -= op3 / 12 * 12;
    }
    if (op2 / 20 > 0)
    {
        op1 += op2 / 20;
        op2 -= op2 / 20 * 20;
    }
    cout << "\n��������� ��������: " << op1 << dot << op2 << dot << op3;
}