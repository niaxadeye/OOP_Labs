#include <iostream>
using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");
    int  guests, chairs, variations = 1;
    cout << "¬ведите количество гостей: ";
    cin >> guests;
    cout << "\n¬ведите количество стульев: ";
    cin >> chairs;
    for (chairs; chairs >= 1; chairs--)
        variations *= guests--;
    cout << "„исло рассадок гостей: " << variations;
}