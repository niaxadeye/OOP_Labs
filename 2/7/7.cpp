#include <iostream>
using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");
    int i, years;
    float S, percentage;
    cout << "������� ��������� �����: ";
    cin >> S;
    cout << "\n������� ����� ���: ";
    cin >> years;
    cout << "\n������� ���������� ������: ";
    cin >> percentage;
    for (i = 0; i < years; i++)
    {
        S += (S * (percentage / 100));
    }
    cout << "\n����� " << years << " ��� �� ��������: " << S;
}