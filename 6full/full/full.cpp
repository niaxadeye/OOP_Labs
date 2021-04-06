#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <ctime>
#include <math.h>
#include <stdlib.h>

using namespace std;

int maxint(int &arr_in, int size) {
    int max_index = 0;
    int* arr = &arr_in;
    int max = arr[0];
    max_index = 0;
    for (int i = 1; i < size; i++) {
        if (arr[i] > max) {
            max = arr[i];
            max_index = i;
        }
    }
    return max_index;
}
void four() {
    cout << "Введите количество элементов в массиве: ";
    int n;
    cin >> n;
    int *num = new int[n];
    for (int i = 0; i < n; i++) {
        cin >> num[i];
    }
    int m_i = maxint(*num, n);
    cout << "Максимальный элемент - " <<  num[m_i] << ", индекс - " << m_i;
}
class Dnum
{
private:
    int num, den;
public:
    void set(int x, int y) {
        num = x;
        den = y;
    }
    void setSum(Dnum start) {
        num = start.num;
        den = start.den;
    }
    void nexSum(Dnum next) {
        num = num * next.den + next.num * den;
        den = den * next.den;
    }
    void average(Dnum sum, int kolvo) {
        den = sum.den * kolvo;
    }
    void out() {
        cout << num << "/" << den;
    }
    void lowterms()
    {
        long tnum, tden, temp, gcd;
        tnum = labs(num);
        tden = labs(den);
        if (tden == 0)
        {
            cout << "Недопустимый знаменатель!"; exit(1);
        }
        else if (tnum == 0)
        {
            num = 0; den = 1; return;
        }
        while (tnum != 0)
        {
            if (tnum < tden)
            {
                temp = tnum; tnum = tden; tden = temp;
            }
            tnum = tnum - tden;
        }
        gcd = tden;
        num = num / gcd;
        den = den / gcd;
    }
};

void five() {
    int x, y;
    char ch = 'y', slash;
    int n = 0;
    Dnum chisla[100];
    Dnum sum;
    do{
        cin >> x >> slash >> y;
        chisla[n].set(x, y);
        cout << "Next? (y/n)";
        cin >> ch;
        n++;
    } while (ch != 'n');

    sum.setSum(chisla[0]);
    for (int i = 1; i < n; i++) {
        sum.nexSum(chisla[i]);
    }

    Dnum average = sum;
    average.average(sum, n);
    average.lowterms();
    average.out();
}

enum Suit { clubs, diamonds, hearts, spades };
const int jack = 11;
const int queen = 12;
const int king = 13;
const int ace = 14;

class card{
private:
    int number;
    Suit suit;
public:
    card(){
    }
    void set(int n, Suit s){
        suit = s; number = n;
    }
    void display(); 
};
void card::display(){
    if (number >= 2 && number <= 10)
        cout << number;
    else{
        switch (number){
        case jack: cout << 'J'; break;
        case queen: cout << 'Q'; break;
        case king: cout << 'K'; break;
        case ace: cout << 'A'; break;
        }
    }
    switch (suit){
    case clubs: cout << static_cast<char>(5); break;
    case diamonds: cout << static_cast<char>(4); break;
    case hearts: cout << static_cast<char>(3); break;
    case spades: cout << static_cast<char>(6); break;
    }
}
void six() {

    card deck[52];
    int j;
    cout << endl;
    for (j = 0; j < 52; j++) // создаем упорядоченную колоду карт
    {
        int num = (j % 13) + 2;
        Suit su = Suit(j / 13);
        deck[j].set(num, su);
    }
    cout << "Исходная колода:\n";
    for (j = 0; j < 52; j++)
    {
        deck[j].display();
        cout << " ";
        if (!((j + 1) % 13)) // начинаем новую строку после каждой 13-й карты
            cout << endl;
    }
    srand(time(NULL)); // инициализируем генератор случайных чисел
    for (j = 0; j < 52; j++)
    {
        int k = rand() % 52; // выбираем случайную карту
        card temp = deck[j]; // и меняем ее с текущей
        deck[j] = deck[k];
        deck[k] = temp;
    }
    card player1[13];
    card player2[13];
    card player3[13];
    card player4[13];
    cout << "\nПеремешанная колода:\n";
    for (j = 0; j < 13; j++) {
        player1[j%13] = deck[j];
    }
    for (j = 13; j < 26; j++) {
        player2[j%13] = deck[j];
    }
    for (j = 26; j < 39; j++) {
        player3[j%13] = deck[j];
    }
    for (j = 39; j < 52; j++) {
        player4[j%13] = deck[j];
    }

    for (j = 0; j < 13; j++){
        player1[j].display();
        cout << " ";
    }
    cout << endl;
    for (j = 0; j < 13; j++){
        player2[j].display();
        cout << " ";
    }
    cout << endl;
    for (j = 0; j < 13; j++){
        player3[j].display();
        cout << " ";
    }
    cout << endl;
    for (j = 0; j < 13; j++){
        player4[j].display();
        cout << " ";
    }
    cout << endl;
}

class MonToDoub {
private:
    string input;
    string output = "";
    long double ans = 0;
public:
    void mstold() {
        char sm[11] = { '0','1','2','3','4','5','6','7','8','9','.' };
        for (int i = 0; i < input.length(); i++) {
            for (int j = 0; j < 11; j++) {
                if (input[i] == sm[j]) {
                    output += sm[j];
                }
            }
        }
    }
    void convert() {
        long double des = 10;
        long double temp;
        int flag = 0;

        char sm[10] = { '0','1','2','3','4','5','6','7','8','9' };
        char* str = new char[output.length()];
        for (int i = 0; i < output.length(); i++) {
            for (int j = 0; j < 10; j++) {
                if (output[i] == sm[j]) {
                    temp = j;
                }
            }
            if (flag == 1) {
                ans = ans + temp / des;
                des *= 10;
            }
            if (output[i] != '.' && flag == 0) {
                ans = ans * 10 + temp;
            }
            else {
                flag = 1;
            }
        }
    }
    void set() {
        cout << "Введите сумму:";
        cin >> input;
    }
    void out() {
        cout << setiosflags(ios::fixed) << setprecision(17) << ans;
    }
};

void seven() {
    char ch;
    do {
        MonToDoub num;
        num.set();
        num.mstold();
        num.convert();
        num.out();
        cout << endl<< "Next? (y/n)" << endl;
        cin >> ch;
    } while (ch != 'n');    
}
void eight() {

}
void nine() {

}
void ten() {

}
void eleven () {

}
void twelve() {

}

int main(){
    int task;
    setlocale(LC_ALL, "Russian");
    cout << "Введите номер задания: ";
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
}