#include <iostream>
#include <string>
#include <locale.h>
#include <math.h>
#pragma once

using namespace std;

class Operacao
{
private:
	float valor1, valor2, resultado = 0.0;
	int erroPot=0;
	char operador;
public:
	Operacao();
	void leitura();
	void soma();
	void subtracao();
	void multiplicacao();
	void divisao();
	void potenciacao();
	void exibicao();
};
