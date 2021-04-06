#include <iostream>
using namespace std;
int main()
{
    setlocale(LC_ALL, "Russian");
    int i, years = 0;
    float S, percentage, fin;
    cout << "Введите начальный вклад: ";
    cin >> S;
    cout << "\nВведите процентную ставку: ";
    cin >> percentage;
    cout << "\nВедите конечную сумму: ";
    cin >> fin;
    while (S <= fin)
    {
        S += (S * (percentage / 100));
        years++;
    }
    cout << "\nВы получите конечную сумму через " << years << " лет";
}
