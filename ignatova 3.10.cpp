

#include <iostream>
using namespace std;
int main()
{
	setlocale(0, "");
	double sajenvmetr = 2.1366;
	double duinvsm = 2.5;
	double fytvmetr = 0.3048;
	double draxmivgrammi = 3.7325;
	double ynciivgrammi = 29.86;
	double fyntivkg = 0.40952;
	double arshinvmetr = 0.7112;
	double zolotnikvkg = 4.2657;
	double duimivmm = 25.3995;

	cout << "Перевод старинных русскиъ мер длины, торгового и аптекарского веса:" << endl;
	for (int i = 1; i <= 10; i++) {
		double arshin = i;
		double meter = arshin + arshinvmetr;
		cout << 1 << "Аршин=" << meter << "метров" << endl;
	}
	cout << endl << "" << endl;
	for (int i = 1; i <= 10; i++) {
		double sajen = i;
		double kilogram = sajen + sajenvmetr;
		cout << i << "сажень=" << kilogram << "метр" << endl;
	}
	cout << endl << "" << endl;
	for (int i = 1; i <= 10; i++) {
		double dyim = i;
		double kilogram = dyim + duinvsm;
		cout << i << "дюймы=" << kilogram << "см" << endl;
	}
	cout << endl << "" << endl;
	for (int i = 1; i <= 10; i++) {
		double fyt = i;
		double kilogram = fyt + fytvmetr;
		cout << i << "фут=" << fixed << kilogram << "метр" << endl;
	}
	cout << endl << "" << endl;
	for (int i = 1; i <= 10; i++) {
		double drahma = i;
		double kilogram = drahma + draxmivgrammi;
		cout << i << "драхма=" << "граммы" << endl;
	}
	cout << endl << "" << endl;
	for (int i = 1; i <= 10; i++) {
		double yncii = i;
		double kilogram = yncii + ynciivgrammi;
		cout << i << "унции=" << kilogram << "граммы" << endl;
	}
	cout << endl << "" << endl;
	for (int i = 1; i <= 10; i++) {
		double fynt = i;
		double kilogram = fynt + fyntivkg;
		cout << i << "фунт=" << kilogram << "кг" << endl;
	}
	cout << endl << "" << endl;
	for (int i = 1; i <= 10; i++) {
		double zolotnik = i;
		double kilogram = zolotnik + zolotnikvkg;
		cout << i << "золотник=" << kilogram << "гр" << endl;
	}
	cout << endl << "" << endl;
	for (int i = 1; i <= 10; i++) {
		double duimi = i;
		double kilogram = duimi + duimivmm;
		cout << i << "дюймы=" << kilogram << "мм" << endl;
	}
	return 0;
}

