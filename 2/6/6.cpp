
#include <iostream>
using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");

    unsigned int num;

    do{
        unsigned long fact = 1;
        cout << "¬ведите число: ";
        cin >> num;

        for (int j = num; j > 0; j--)

            fact *= j;

        cout << "‘акториал введЄнного числа: " << fact << endl;

    } while (num != 0);
}