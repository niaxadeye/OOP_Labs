#include <iostream>
using namespace std;

int main(){
    setlocale(LC_ALL, "Russian");
    cout << "Введите сумму в долларах для перевода в  фунты, франки, немецкие марки и японские йены: ";    
    float money;
    cin >> money;
    cout << "Фунты: " << (money / 1.487) << endl;
    cout << "Франки: " << (money / 0.172) << endl;
    cout << "Немецкие марки: " << (money / 0.584) << endl;
    cout << "Японские йены: " << (money / 0.00955);
}
