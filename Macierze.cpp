#include "Macierze.h"

Macierze::Macierze()
{
	for (int i = 0; i < 5; i++) {
		std::vector<double> row; {
			for (int j = 0; j < 5; j++) {
				int liczba = std::rand();
				row.push_back(liczba);
			}
			Tab2d.push_back(row);
		}
	}
}

void Macierze::Wyswietl()
{
	for(int i=0;i<5;i++){
		for (int j = 0; j < 5; j++){
			std::cout<<" "<<Tab2d[i][j];
		}
		std::cout << std::endl;
	}
}

void Macierze::Skalar(double liczba)
{
	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 5; j++) {
			Tab2d[i][j]*=liczba;
		}
	}
}

void Macierze::Dodawanie_Macierzy(Macierze m)
{
	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 5; j++) {
			Tab2d[i][j] += m.Tab2d[i][j];
		}
	}
}

void Macierze::Mnozenie_Macierzy(Macierze m)
{
	double C[5][5];
	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 5; j++)
		{
			int s = 0;
			for (int k = 0; k < 5; k++) s += Tab2d[i][k] * m.Tab2d[k][j];
			C[i][j] = s;
		}
	}
	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 5; j++) {
			Tab2d[i][j] = C[i][j];
		}
	}
}

Macierze::~Macierze()
{
}



