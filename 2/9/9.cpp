#include <iostream>
using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");
    int  guests, chairs, variations = 1;
    cout << "������� ���������� ������: ";
    cin >> guests;
    cout << "\n������� ���������� �������: ";
    cin >> chairs;
    for (chairs; chairs >= 1; chairs--)
        variations *= guests--;
    cout << "����� �������� ������: " << variations;
}