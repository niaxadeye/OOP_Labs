#include <iostream>
using namespace std;
int main()
{
    setlocale(LC_ALL, "Russian");
    int i, years = 0;
    float S, percentage, fin;
    cout << "������� ��������� �����: ";
    cin >> S;
    cout << "\n������� ���������� ������: ";
    cin >> percentage;
    cout << "\n������ �������� �����: ";
    cin >> fin;
    while (S <= fin)
    {
        S += (S * (percentage / 100));
        years++;
    }
    cout << "\n�� �������� �������� ����� ����� " << years << " ���";
}
