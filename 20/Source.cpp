//lab_02.cpp
// Ожогова Дарина Сергіївна
//Лабораторна робота №2 
//Лінійні програми.
//Варіант 19

#include <iostream>
#include <cmath>

using namespace std;
int main()
{
	double a;
	double z1;
	double z2;

	cout << "a=  ";
	cin >> a;

	//z1 = 1.0 / (((1.0 + a + a * a) / (2.0 * a + a * a)) + 2.0 - ((1.0 - a + a * a) / (2.0 * a - a * a))) * (5.0 - 2.0 * a * a);

	z2 = (4.0 - a * a) / 2.0;
	cout << endl;
	//cout << "z1=  " << z1 << endl;
	cout << "z2=  " << z2 << endl;
	cin.get();
	return 0;
}