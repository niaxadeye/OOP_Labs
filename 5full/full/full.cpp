#include <iostream>
#include <Windows.h>
#include <ctype.h>
#include <iomanip> 
#include <conio.h>
using namespace std;

void four(){    
    class employee {
    private:
        int number;
        float money;
    public:
        void e_in() {
            cout << "Введите номер и величину пособия сотрудника: ";
            cin >> number >> money;
        }
        void e_out() {
            cout << "Номер сотрудника: " << number << "; Величина пособия: " << money << endl;
        }
    };
    employee p1, p2, p3;
    p1.e_in();
    p1.e_out();
    p2.e_in();
    p2.e_out();
    p3.e_in();
    p3.e_out();
}
class Date{
    private:
        int day;
        int month;
        int year;
    public:
        void getdate(){
            char slash;
            cout << "Введите Дату в формате ДД/MM/ГГГГ: " << endl;
            cin >> day >> slash >> month >> slash >> year;
        }
        void  showdate(){
           cout << "Введённая дата: " << day << "/" << month << "/" << year;
        }
};
void five()
{
    Date data;
    data.getdate();
    data.showdate();
}
enum etype {
    laborer, secretary, manager, accountant, executive, researcher
};
void six(){
    class employee
    {
    private:
        int number;
        float money;
        int day;
        int month;
        int year;
        etype digit;
    public:
        void getemploy()
        {
           
            cout << "Введите номер и величину пособия сотрудника: ";
            cin >> number >> money;
            char slash;
            cout << "Введите дату приёма сотрудника на работу в формате ДД/MM/ГГГГ: " << endl;
            cin >> day >> slash >> month >> slash >> year;
                        cout << "Введите первую букву должности (laborer, secretary, manager, accountant, executive, researcher): ";
            char symbol;
            cin >> symbol;

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

        }
        void putemploy(){
            cout << "Номер сотрудника: " << number << "; Величина пособия: " << money << endl;
            cout << "Дата приёма на работу: " << day << "/" << month << "/" << year << endl;
            string stroka;
            switch (digit){
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
            cout << "Полное название должности: " << stroka << endl;
        }
    };

    employee p1, p2, p3;
    p1.getemploy();
    p2.getemploy();
    p3.getemploy();
    p1.putemploy();
    p2.putemploy();
    p3.putemploy();
}
void seven(){
    class Angle{
    private:
        int degree;
        float minutes;
        char side;
    public:
        Angle() : degree(0), minutes(0), side(0){
        }
        Angle(int d, float m, char s) : degree(d), minutes(m), side(s){
        }
        void angle_in(){
            cout << "\nВведите градус, минуту и направление:\n";
            cin >> degree >> minutes >> side;
            if (minutes >= 60){
                degree += int(minutes / 60);
                minutes -= 60 * int(minutes / 60);
            }
        }
        void angle_out(){
            switch (side){
            case ('N'): if ((degree > 90) && (degree < -90)) cout << "Выход за пределы значения градусов"; else cout << degree << "°" << minutes << "' " << side; break;
            case ('S'): if ((degree > 90) && (degree < -90))cout << "Выход за пределы значения градусов"; else cout << degree << "°" << minutes << "' " << side; break;
            case ('E'): if ((degree > 180) && (degree < -180))cout << "Выход за пределы значения градусов"; else cout << degree << "°" << minutes << "' " << side; break;
            case ('W'): if ((degree > 180) && (degree < -180))cout << "Выход за пределы значения градусов"; else cout << degree << "°" << minutes << "' " << side; break;
            }
        }
    };
    Angle a1;
    a1.angle_in();
    a1.angle_out();
}
class numbers{
    private:
       int num;
       static int count;
    public:
       numbers(){
           count++;
           num = count;
       }
    void out(){
        cout << "Порядковый номер: " << num << endl;
    }
};
int numbers::count = 0;
void eight(){
    numbers num1, num2, num3;
    num1.out();
    num2.out();
    num3.out();
    num1.out();
}
void nine(){
    class fraction{
        private:
            int ch;
            int zn;
        public:
            void f_in(){
                char slash;
                cout << "Введите первую дробь: ";
                cin >> ch >> slash >> zn;
                cout << "Введите вторую дробь: ";
                cin >> ch >> slash >> zn;
            }
            void f_add(fraction d1, fraction d2){
                ch = (d1.ch * d2.zn) + (d1.zn * d2.ch);
                zn = d1.zn * d2.zn;
            }
            void f_out(){
                cout << "\nСумма дробей равна: " << ch << "/" << zn;
            }
    };

    fraction d1, d2, d3;
    d1.f_in();
    d2.f_in();
    d3.f_add(d1, d2);
    d3.f_out();


}
class ship{
    private:
        int num;
        static int count;
        int degree;
        float minutes;
        char side;
    public:
        ship() : degree(0), minutes(0), side(0){
            count++;
            num = count;
        }
    ship(int d, float m, char s) : degree(d), minutes(m), side(s){
    }
    void ship_in(){
        cout << "\nВведите градус, минуту и направление:\n";
        cin >> degree >> minutes >> side;
        if (minutes >= 60){
            degree = int(minutes / 60);
            minutes -= (minutes / 60);
        }
    }
    void ship_out(){
        switch (side){
        case ('N'): if ((degree > 90) && (degree < -90)) cout << "Выход за пределы значения градусов"; else cout << "Координаты: " << num << "-го корабля: " << degree << "°" << minutes << "' " << side << endl; break;
        case ('S'): if ((degree > 90) && (degree < -90)) cout << "Выход за пределы значения градусов"; else cout << "Координаты: " << num << "-го корабля: " << degree << "°" << minutes << "' " << side << endl; break;
        case ('E'): if ((degree > 180) && (degree < -180)) cout << "Выход за пределы значения градусов"; else cout << "Координаты: " << num << "-го корабля: " << degree << "°" << minutes << "' " << side << endl; break;
        case ('W'): if ((degree > 180) && (degree < -180)) cout << "Выход за пределы значения градусов"; else cout << "Координаты: " << num << "-го корабля: " << degree << "°" << minutes << "' " << side << endl; break;
        }
    }
};
int ship::count = 0;
void ten(){
    ship s1, s2, s3;
    s1.ship_in();
    s2.ship_in();
    s3.ship_in();
    s1.ship_out();
    s2.ship_out();
    s3.ship_out();

}
class fraction{
    private:
       int ch;
       int zn;
    public:
        fraction() :ch(0), zn(0) {
        }
        fraction(int c, int z) :ch(c), zn(z) {
        }
        void fsum(fraction fr1, fraction fr2){
        ch = (fr1.ch * fr2.zn + fr1.zn * fr2.ch);
        zn = (fr1.zn * fr2.zn);
        }
        void fsub(fraction fr1, fraction fr2){
        ch = (fr1.ch * fr2.zn - fr1.zn * fr2.ch);
        zn = (fr1.zn * fr2.zn);
        }
        void fmul(fraction fr1, fraction fr2){
        ch = (fr1.ch * fr2.ch);
        zn = (fr1.zn * fr2.zn);
        }
        void fdiv(fraction fr1, fraction fr2){
        ch = (fr1.ch * fr2.zn);
        zn = (fr1.zn * fr2.ch);
        }
        void f_in(){
            char slash;
            cout << "\nВведите операнд: ";
            cin >> ch >> slash >> zn;

        }
        void f_out(){
            if (ch != 0 && zn != 0)
                cout << "Ответ = " << ch << "/" << zn;
        }
        void lowterms() // сокращение дроби
        {
            long tnum, tden, temp, gcd;
            tnum = labs(ch); // используем неотрицательные
            tden = labs(zn); // значения (нужен cmath)
            if (tden == 0){
            cout << "Недопустимый знаменатель!"; exit(1);
            }
            else if (tnum == 0){
            ch = 0; zn = 1; return;
            }
        // нахождение наибольшего общего делителя
            while (tnum != 0){
            if (tnum < tden){
                temp = tnum; tnum = tden; tden = temp;
            } // меняем их местами
            tnum = tnum - tden; // вычитание
            }
            gcd = tden; // делим числитель и знаменатель на
            ch = ch / gcd; // полученный наибольший общий делитель
            zn = zn / gcd;
    }
};
void eleven(){
    fraction fr1, fr2, totalfr;
    fr1.f_in();
    fr2.f_in();
    totalfr.fmul(fr1, fr2);
    totalfr.lowterms();
    totalfr.f_out();
}
void twelve()
{

}
int main(){
    int task;
    setlocale(LC_ALL, "Russian");
    cout << "Введите номер задания:";
    cin >> task;
    switch (task){
        case 4: 
            four(); 
            break;
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
