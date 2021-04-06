#include <iostream>
#include <Windows.h>
#include <ctype.h>
#include <iomanip> 
#include <conio.h>   
#include <string>
using namespace std;

long hms_to_secs(int hours, int minutes, int seconds){
    return hours * 3600 + minutes * 60 + seconds;
}
void five(){
    int hours, minutes, seconds;
    char ch;
    do {
        cout << "Введите количество Часов, минут и секунд: ";
        cin >> hours >> minutes >> seconds;
        cout << hms_to_secs(hours, minutes, seconds);
        cout << "Next? (y/n): ";
        cin >> ch;
    } while (ch != 'n');
}
struct time_{
    int seconds;
    int minutes;
    int hours;
};
long time_to_secs(time_ t1){
    return t1.hours * 3600 + t1.minutes * 60 + t1.seconds;
}
time_ secs_to_time(long seconds){
    time_ t;
    t.hours = seconds / 3600;
    t.minutes = (seconds % 3600) / 60;
    t.seconds = (seconds % 3600) % 60;
    return t;
}
void six(){
    time_ t1, t2, total;
    char dots;
    cout << "Введите первое время в формате ЧЧ:ММ:СС  ";
    cin >> t1.hours >> dots >> t1.minutes >> dots >> t1.seconds;
    cout << "Введите второе время в формате ЧЧ:ММ:СС  ";
    cin >> t2.hours >> dots >> t2.minutes >> dots >> t2.seconds;
    long  totalsecs = time_to_secs(t1) + time_to_secs(t2);
    total = secs_to_time(totalsecs);
    cout << "Сумма двух значений времени: " << total.hours << ":" << total.minutes << ":" << total.seconds;

}
double power_(double n, int p){
    double res = 1;
    for (int i = 1; i <= p; i++)
        res *= n;
    return res;
}
double power_(char n, int p){
    char res = 1;
    for (int i = 1; i <= p; i++)
        res *= n;
    return res;
}
double power_(int n, int p){
    int res = 1;
    for (int i = 1; i <= p; i++)
        res *= n;
    return res;
}
double power_(long n, int p){
    long res = 1;
    for (int i = 1; i <= p; i++)
        res *= n;
    return res;
}
double power_(float n, int p){
    float res = 1;
    for (int i = 1; i <= p; i++)
        res *= n;
    return res;
}
double power_(double n, int p = 2);
double power_(char n, int p = 2);
double power_(int n, int p = 2);
double power_(long n, int p = 2);
double power_(float n, int p = 2);
void seven(){
    int p, Int;
    double Double;
    char Char, ch;
    long Long;
    float Float;
    cout << "Введите значения для типа double, char, int, long, float: ";
    cin >> Double >> Char >> Int >> Long >> Float;
    cout << "\nВвести степень (y - да, n - нет)? ";
    cin >> ch;
    switch (ch){
    case 'y':
        cout << "\nВведите степень: ";
        cin >> p;
        cout << "\nДля double: " << power_(Double, p)
            << "\nДля char: " << power_(Char, p)
            << "\nДля int: " << power_(Int, p)
            << "\nДля long: " << power_(Long, p)
            << "\nДля float: " << power_(Float, p);
        break;
    case 'n':
        cout << "\nДля double в квадрате: " << power_(Double)
            << "\nДля char в квадрате: " << power_(Char)
            << "\nДля int в квадрате: " << power_(Int)
            << "\nДля long в квадрате: " << power_(Long)
            << "\nДля float в квадрате: " << power_(Float);
        break;
    default:
        cout << "\nОшибка";
    }
}
void swap(int& a, int& b){
    int buf;
    buf = a;
    a = b;
    b = buf;
}

void eight(){
    int a, b;
    cout << "a = ";
    cin >> a;
    cout << "b = ";
    cin >> b;
    swap(a, b);
    cout << "a = " << a << ", b = " << b;
}
time_ swap_time(time_& a, time_& b){
    time_ buf;
    buf = a;
    a = b;
    b = buf;
    return a, b;
}
void nine(){
    time_ t1, t2, total;
    char dots = ':';
    cout << "Введите первое время в формате ЧЧ:ММ:СС  ";
    cin >> t1.hours >> dots >> t1.minutes >> dots >> t1.seconds;
    cout << "Введите второе время в формате ЧЧ:ММ:СС  ";
    cin >> t2.hours >> dots >> t2.minutes >> dots >> t2.seconds;
    swap_time(t1, t2);
    cout << "Первое время: " << t1.hours << dots << t1.minutes << dots << t1.seconds << endl
        << "Второе время: " << t2.hours << dots << t2.minutes << dots << t2.seconds;
}
void count(int& num){
    cout << "Количество вызовов: " << num << endl;
    num++;
}
void ten(){
    int num = 1;
    for (int i = 1; i <= 20; i++){
        count(num);
    }
}
struct sterling{
    int pounds;
    int shillings;
    int pence;
};
sterling input(sterling& num){
    char dot;
    cout << "Введите сумму в фунтах, шиллингах и пенсах: ";
    cin >> num.pounds >> dot >> num.shillings >> dot >> num.pence;
    cout << endl;
    return num;
}
sterling add(sterling num1, sterling num2){
    sterling sum;
    sum.pounds = num1.pounds + num2.pounds;
    sum.shillings = num1.shillings + num2.shillings;
    sum.pence = num1.pence + num2.pence;
    if (sum.pence / 12 > 0)    {
        sum.shillings += sum.pence / 12;
        sum.pence -= sum.pence / 12 * 12;
    }
    if (sum.shillings / 20 > 0)    {
        sum.pounds += sum.shillings / 20;
        sum.shillings -= sum.shillings / 20 * 20;
    }
    return sum;
}
void output(sterling sum){
    char dot = '.';
    cout << "Сумма равна: " << sum.pounds << dot << sum.shillings << dot << sum.pence;
}
void eleven(){
    sterling num1, num2, sum;
    input(num1);
    input(num2);
    sum = add(num1, num2);
    output(sum);
}
struct fraction{
    int ch;
    int zn;
};
fraction fsum(fraction fr1, fraction fr2){
    fraction totalfr;
    totalfr.ch = (fr1.ch * fr2.zn + fr1.zn * fr2.ch);
    totalfr.zn = (fr1.zn * fr2.zn);
    return totalfr;
}
fraction fsub(fraction fr1, fraction fr2){
    fraction totalfr;
    totalfr.ch = (fr1.ch * fr2.zn - fr1.zn * fr2.ch);
    totalfr.zn = (fr1.zn * fr2.zn);
    return totalfr;
}
fraction fmul(fraction fr1, fraction fr2){
    fraction totalfr;
    totalfr.ch = (fr1.ch * fr2.ch);
    totalfr.zn = (fr1.zn * fr2.zn);
    return totalfr;
}
fraction fdiv(fraction fr1, fraction fr2){
    fraction totalfr;
    totalfr.ch = (fr1.ch * fr2.zn);
    totalfr.zn = (fr1.zn * fr2.ch);
    return totalfr;
}
void twelve(){
    fraction fr1, fr2, totalfr;
    char oper, slash, ch;
    do {
        cout << "\nВведите первый операнд, знак операции, второй операнд: ";
        cin >> fr1.ch >> slash >> fr1.zn >> oper >> fr2.ch >> slash >> fr2.zn;
        switch (oper){
            case '+':
                totalfr = fsum(fr1, fr2);  
                break;
            case '-': 
                totalfr = fsub(fr1, fr2); 
                break;
            case '*': 
                totalfr = fmul(fr1, fr2); 
                break;
            case '/': 
                totalfr = fdiv(fr1, fr2); 
                break;
            default: 
                totalfr.ch = 0; totalfr.zn = 0; cout << "Неверно введены данные" << endl;
                break;
        }
        if (totalfr.ch != 0 && totalfr.zn != 0)
            cout << "Answer = " << totalfr.ch << slash << totalfr.zn; cout << "\nDo another?(Enter 'y' or 'n') "; 
        cin >> ch;
    } while (ch != 'n');
}

int main(){
    setlocale(LC_ALL, "Russian");
    int task;    
    cout << "Введите номер задания:";
    cin >> task;
    switch (task){
    case 5:
        five(); 
        break;
    case 6:
        six(); 
        break;
    case 7: 
        seven(); 
        break;
    case 8:
        eight(); 
        break;
    case 9: 
        nine(); 
        break;
    case 10: 
        ten(); 
        break;
    case 11: 
        eleven(); 
        break;
    case 12: 
        twelve(); 
        break;
    default:
        break;
    }
    return 0;
}