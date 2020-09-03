#pragma once
#include <iostream>
#include <conio.h>
#include <math.h>
#include <stack>
#include <cstdlib>
#include <cmath>
#include <string>

//using namespace std;

class Calculadora {

public:
	Calculadora();

	~Calculadora();

	int prioridad(char op);
	std::string convertir(std::string t);
	double evaluar(std::string p);

	double suma(const double x, const double y);

	double resta(const double x, const double y);

	double multiplicacion(const double x, const double y);

	//retorna la division x/y
	double division(const double x, const double y);

	//retorna la operacion x^y
	double potencia(const double x, const int y);

	//retorna la raiz cuadrada de x
	double raiz(const double x);

	double factorial(const int x);

	double seno(const double x);

	double coseno(const double x);

	double tangente(const double x);

	//retorna el lagaritmo en basse 10 de x;
	double logaritmo(const int x);

};

