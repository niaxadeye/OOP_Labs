#include <iostream>
using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");
    char dot, ch;
    int sum1, sum2, sum3, lb1, shilling1, penny1, lb2, shilling2, penny2;
    do
    {
        cout << "¬ведите первую сумму: ";
        cin >> lb1 >> dot >> shilling1 >> dot >> penny1;
        cout << "\n¬ведите вторую сумму: ";
        cin >> lb2 >> dot >> shilling2 >> dot >> penny2;
        sum1 = lb1 + lb2;
        sum2 = shilling1 + shilling2;
        sum3 = penny1 + penny2;
        if (sum3 > 11)
        {
            sum2 += 1;
            sum3 -= 12;
        }
        if (sum2 > 19)
        {
            sum1 += 1;
            sum2 -= 20;
        }
        cout << "\n—умма равна: " << sum1 << dot << sum2 << dot << sum3 << "\nNext? (y/n) ";
        cin >> ch;
        cout << endl;
    } while (ch != 'n');
}
