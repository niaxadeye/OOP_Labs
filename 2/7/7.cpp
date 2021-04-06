#include <iostream>
using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");
    int i, years;
    float S, percentage;
    cout << "¬ведите начальный вклад: ";
    cin >> S;
    cout << "\n¬ведите число лет: ";
    cin >> years;
    cout << "\n¬ведите процентную ставку: ";
    cin >> percentage;
    for (i = 0; i < years; i++)
    {
        S += (S * (percentage / 100));
    }
    cout << "\n„ерез " << years << " лет вы получите: " << S;
}