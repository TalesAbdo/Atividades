#include <stdio.h>
#include <iostream>
#include <string>
#include <stdlib.h>
#include <locale.h>
#include <math.h>
#pragma once

using namespace std;

class Operacao
{
private:
	double valor1, valor2, resultado = 0.0;
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
