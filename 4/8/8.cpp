#include <iostream>
#include <iomanip> 
using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");
    cout << "Москва";
    cout << setfill('+') << setw(12) << 84225758 << endl;
}