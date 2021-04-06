#include <iostream>
#include <iomanip> 
using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");
    cout << setiosflags(ios::left) << setw(10) << "Фамилия" << setw(10) << "Имя" << setw(15) << "Адрес" << setw(10) << "Город" << endl << endl;

    cout << setfill(' ') << setw(10) << "Петров" << setw(10) << "Василий" << setw(15) << "Кленовая 16" << setw(10) << "Санкт-Петербург" << endl
                         << setw(10) << "Иванов" << setw(10) << "Сергей" << setw(15) << "Осиновая 3" << setw(10) << "Находка" << endl
                         << setw(10) << "Сидоров" << setw(10) << "Иван" << setw(15) << "Березовая 21" << setw(10) << "Калининград" << endl;
}