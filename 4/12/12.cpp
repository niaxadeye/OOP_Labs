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
    cout << "������� ����� � ���������� ������: ";

    cin >> oldpounds;

    pounds = static_cast<int>(oldpounds); // �����

    double frac = oldpounds - pounds; 

    shillings = frac * 20; // ��������

    pence = frac*240 - shillings*12; // �����

    cout << "����� � ������ ������: "<< a << pounds << '.' << shillings << '.' << pence << endl;
}