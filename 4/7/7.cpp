#include <iostream>
using namespace std;

int main(){
    setlocale(LC_ALL, "Russian");
    cout << "������� ����������� � �������� ������� ��� �������� � � ������� ����������: ";
    float degree;
    cin >> degree;
    cout << "����������� � �������� ����������: " << (degree * 9 / 5 + 32);
}
