#include <iostream>
#include <ctype.h>
using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");
    char S;
    cout << "¬ведите букву: ";
    cin >> S;
    cout << islower(S);
}
