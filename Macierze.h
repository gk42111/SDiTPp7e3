#pragma once
#include <iostream>
#include <string>
#include <cmath>
#include <vector>
#include <cstdlib>
class Macierze
{
public:
	std::vector<std::vector<double>> Tab2d;
	Macierze();
	void Wyswietl();
	void Skalar(double);
	void Dodawanie_Macierzy(Macierze);
	void Mnozenie_Macierzy(Macierze);
	~Macierze();
};
