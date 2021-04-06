#include <iostream>
#include <iomanip> 

using namespace std;
int main()
{
    setlocale(LC_ALL, "Russian");

    const int z = 20, x = 2;
    int i, j;
    for (i = 0; i < z; i++)
    {
        cout << setw(x * (z + 1 - i));
        for (j = 1; j <= 1 + i * x; j++)
            cout << "X";
        cout << endl;
    }
}