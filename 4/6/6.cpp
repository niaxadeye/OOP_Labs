#include <iostream>
using namespace std;

int main(){
    setlocale(LC_ALL, "Russian");
    cout << "������� ����� � �������� ��� �������� �  �����, ������, �������� ����� � �������� ����: ";    
    float money;
    cin >> money;
    cout << "�����: " << (money / 1.487) << endl;
    cout << "������: " << (money / 0.172) << endl;
    cout << "�������� �����: " << (money / 0.584) << endl;
    cout << "�������� ����: " << (money / 0.00955);
}
