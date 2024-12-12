#include<iostream>
#include<iomanip>
#include"mytemperature.h"
using namespace std;
int main() {
	cout << left << setw(10) << "Celsius" << setw(15) << "Fahrenheit" << "|"
		<< setw(15) << "Fahrenheit" << setw(10) << "Celsius" << endl;
	for (double cel = 40.0; cel >= 31.0; cel -= 1.0) {
		double fah = celsius_to_fah(cel);
		double fah2 = fah;
		double cel2 = fahrenheit_to_cels(fah2);
		cout << fixed << setprecision(1)
			<< setw(10) << cel
			<< setw(15) << fah
			<< " | "
			<< setw(15) << fah2
			<< setw(10) << setprecision(2) << cel2 << endl;
	}
	return 0;
}