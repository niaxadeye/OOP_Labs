#include <iostream>
#include <iomanip> 
using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");
    cout << setiosflags(ios::left) << setw(10) << "�������" << setw(10) << "���" << setw(15) << "�����" << setw(10) << "�����" << endl << endl;

    cout << setfill(' ') << setw(10) << "������" << setw(10) << "�������" << setw(15) << "�������� 16" << setw(10) << "�����-���������" << endl
                         << setw(10) << "������" << setw(10) << "������" << setw(15) << "�������� 3" << setw(10) << "�������" << endl
                         << setw(10) << "�������" << setw(10) << "����" << setw(15) << "��������� 21" << setw(10) << "�����������" << endl;
}