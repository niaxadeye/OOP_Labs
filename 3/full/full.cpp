#include <iostream>
#include <Windows.h>
#include <ctype.h>
#include <iomanip> 
#include <conio.h>   
#include <string>

using namespace std;

struct Employee
{
    int number;
    float money;
};
struct Date
{
    int day;
    int month;
    int year;

};
enum etype {
    laborer, secretary, manager, accountant, executive, researcher
};
struct Fraction
{
    int ch;
    int zn;
};
struct Time
{
    int seconds;
    int minutes;
    int hours;

};
struct Sterling
{
    int pounds;
    int shillings;
    int pence;
};

void Four(){
    Employee p1, p2, p3;
    cout << "Введите номер и величину пособия первого сотрудника: ";
    cin >> p1.number >> p1.money;
    cout << "Введите номер и величину пособия второго сотрудника: ";
    cin >> p2.number >> p2.money;
    cout << "Введите номер и величину пособия третьего сотрудника: ";
    cin >> p3.number >> p3.money;
    cout << "Номер первого сотрудника: " << p1.number << "; Величина пособия: " << p1.money << endl;
    cout << "Номер второго сотрудника: " << p2.number << "; Величина пособия: " << p2.money << endl;
    cout << "Номер третьего сотрудника: " << p3.number << "; Величина пособия: " << p3.money << endl;
}
void Five()
{
    Date data;
    char slash;
    cout << "Введите Дату в формате ДД/MM/ГГГГ: " << endl;
    cin >> data.day >> slash >> data.month >> slash >> data.year;
    cout << "Введённая дата: " << data.day << "/" << data.month << "/" << data.year;

}
void Six(){
    cout << "Введите первую букву должности (laborer, secretary, manager, accountant, executive, researcher): ";
    char symbol;
    cin >> symbol;
    int digit;
    switch (symbol) {
    case 'l':
        digit = etype(laborer); 
        break;
    case 's':
        digit = etype(secretary); 
        break;
    case 'm':
        digit = etype(manager); 
        break;
    case 'a':
        digit = etype(accountant); 
        break;
    case 'e':
        digit = etype(executive); 
        break;
    case 'r':
        digit = etype(researcher); 
        break;
    }
    string stroka;
    switch (digit)
    {
    case 0:
        stroka = "laborer"; 
        break;
    case 1:
        stroka = "secretary"; 
        break;
    case 2:
        stroka = "manager"; 
        break;
    case 3:
        stroka = "accountant"; 
        break;
    case 4:
        stroka = "executive"; 
        break;
    case 5:
        stroka = "researcher"; 
        break;

    }
    cout << "Полное название должности: " << stroka;
}
void Seven(){
    struct NMS{
        float money;
        int number;
        char symbol;
        string stroka;
    };
    struct Employee{
        NMS emp;
        Date data;
        int type;
    };

    Employee p[3];
    char slash;
    int i;
    for (i = 0; i < 3; i++)
    {
        cout << "Введите номер и величину зарплаты " << i + 1 << "-го сотрудника: ";
        cin >> p[i].emp.number >> p[i].emp.money;
        cout << "Введите Дату в формате ДД/MM/ГГГГ: ";
        cin >> p[i].data.day >> slash >> p[i].data.month >> slash >> p[i].data.year;
        cout << "Введите первую букву должности (laborer, secretary, manager, accountant, executive, researcher): ";
        cin >> p[i].emp.symbol;


        switch (p[i].emp.symbol) {
        case 'l':
            p[i].type = etype(laborer); 
            break;
        case 's':
            p[i].type = etype(secretary); 
            break;
        case 'm':
            p[i].type = etype(manager); 
            break;
        case 'a':
            p[i].type = etype(accountant); 
            break;
        case 'e':
            p[i].type = etype(executive); 
            break;
        case 'r':
            p[i].type = etype(researcher); 
            break;
        }
        switch (p[i].type)
        {
        case 0:
            p[i].emp.stroka = "laborer"; 
            break;
        case 1:
            p[i].emp.stroka = "secretary"; 
            break;
        case 2:
            p[i].emp.stroka = "manager"; 
            break;
        case 3:
            p[i].emp.stroka = "accountant"; 
            break;
        case 4:
            p[i].emp.stroka = "executive"; 
            break;
        case 5:
            p[i].emp.stroka = "researcher"; 
            break;
        }
    }
    for (i = 0; i < 3; i++)
    {
        cout << "Номер " << i + 1 << "-го  сотрудника: " << p[i].emp.number << "; Величина пособия: " << p[i].emp.money << endl;
        cout << "Дата принятия на работу: " << p[i].data.day << "/" << p[i].data.month << "/" << p[i].data.year << endl;
        cout << "Занимаемая должность: " << p[i].emp.stroka << endl << endl;
    }
}
void Eight(){
    char slash;
    Fraction d1, d2;
    char devide;
    cout << "Введите первую дробь: ";
    cin >> d1.ch >> slash >> d1.zn;
    cout << "Введите вторую дробь: ";
    cin >> d2.ch >> slash >> d2.zn;

    cout << "\nСумма дробей равна: " << (d1.ch * d2.zn) + (d1.zn * d2.ch) << "/" << d1.zn * d2.zn;
}
void Nine(){
    Time t1;
    cout << "Введите количество часов, минут и секунд: ";

    cin >> t1.hours >> t1.minutes >> t1.seconds;
    long  totalsecs = t1.hours * 3600 + t1.minutes * 60 + t1.seconds;
    cout << "Всего секунд: " << totalsecs;
}
void Ten(){
    Sterling oldlb;
    double newlb, frac;
    cin >> newlb;
    oldlb.pounds = static_cast<int>(newlb);
    frac = newlb - oldlb.pounds;
    oldlb.shillings = frac * 20;
    oldlb.pence = frac * 240 - oldlb.shillings * 12;
    cout << "Значение в старых фунтах: " << oldlb.pounds << "." << oldlb.shillings << "." << oldlb.pounds;
}
void Eleven()
{
    Time t1, t2, total;
    char dots;
    cout << "Введите первое время в формате ЧЧ:ММ:СС  ";
    cin >> t1.hours >> dots >> t1.minutes >> dots >> t1.seconds;
    cout << "Введите второе время в формате ЧЧ:ММ:СС  ";
    cin >> t2.hours >> dots >> t2.minutes >> dots >> t2.seconds;
    long  totalsecs = t1.hours * 3600 + t1.minutes * 60 + t1.seconds + t2.hours * 3600 + t2.minutes * 60 + t2.seconds;
    total.hours = totalsecs / 3600;
    total.minutes = (totalsecs % 3600) / 60;
    total.seconds = (totalsecs % 3600) % 60;
    cout << "Сумма двух значений времени: " << total.hours << ":" << total.minutes << ":" << total.seconds;
}
void Twelve()
{
    Fraction fr1, fr2, totalfr;
    char oper, slash, ch;

    do{
        cout << "\nВведите первый операнд, знак операции, второй операнд: ";
        cin >> fr1.ch >> slash >> fr1.zn >> oper >> fr2.ch >> slash >> fr2.zn;
        switch (oper){
        case '+':
            totalfr.ch = (fr1.ch * fr2.zn + fr1.zn * fr2.ch);
            totalfr.zn = (fr1.zn * fr2.zn);
            break;
        case '-':
            totalfr.ch = (fr1.ch * fr2.zn - fr1.zn * fr2.ch);
            totalfr.zn = (fr1.zn * fr2.zn);
            break;
        case '*':
            totalfr.ch = (fr1.ch * fr2.ch);
            totalfr.zn = (fr1.zn * fr2.zn);
            break;
        case '/':
            totalfr.ch = (fr1.ch * fr2.zn);
            totalfr.zn = (fr1.zn * fr2.ch);
            break;
        default:
            totalfr.ch = 0; totalfr.zn = 0; cout << "Неверно введены данные" << endl;
            break;
        }
        if (totalfr.ch != 0 && totalfr.zn != 0)
            cout << "Answer = " << totalfr.ch << slash << totalfr.zn; cout << "\nNext? (y/n)"; cin >> ch;
    } while (ch != 'n');
}

int main()
{
    setlocale(LC_ALL, "Russian");
    int task;
    cout << "Введите номер задания:";
    cin >> task;
    switch (task){
    case 4: 
        Four(); 
        break;
    case 5:
        Five(); 
        break;
    case 6:
        Six(); 
        break;
    case 7: 
        Seven(); 
        break;
    case 8:
        Eight(); 
        break;
    case 9: 
        Nine(); 
        break;
    case 10: 
        Ten(); 
        break;
    case 11: 
        Eleven();
        break;
    case 12: 
        Twelve(); 
        break;
    default:
        break;
    }
    return 0;
}