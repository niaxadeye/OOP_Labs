#include <iostream>
using namespace std;

int main(){
    setlocale(LC_ALL, "Russian");
    cout << "Введите температуру в градусах цельсия для перевода её в градусы фаренгейта: ";
    float degree;
    cin >> degree;
    cout << "Температура в градусах фаренгейта: " << (degree * 9 / 5 + 32);
}
