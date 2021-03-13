// 6_5.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

class Dnum
{
	private: 
		int num,den;
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
int main()
{
	int x, y;
	char ch = 'y', slash;
	int n = 0;
	Dnum chisla[100];
	Dnum sum;
	do 
	{
		cin >> x >> slash>> y;
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

	return 0;
}