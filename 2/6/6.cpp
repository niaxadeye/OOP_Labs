
#include <iostream>
using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");

    unsigned int num;

    do{
        unsigned long fact = 1;
        cout << "������� �����: ";
        cin >> num;

        for (int j = num; j > 0; j--)

            fact *= j;

        cout << "��������� ��������� �����: " << fact << endl;

    } while (num != 0);
}