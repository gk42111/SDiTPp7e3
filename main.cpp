#include <iostream>
#include "Macierze.h"
using namespace std;
int main() {
	Macierze m;
	Macierze m1;
	m.Wyswietl();
	m.Skalar(4);
	m.Wyswietl();
	m.Dodawanie_Macierzy(m1);
	m.Wyswietl();
	m.Mnozenie_Macierzy(m1);
	m.Wyswietl();

	system("pause");
	return 0;
}