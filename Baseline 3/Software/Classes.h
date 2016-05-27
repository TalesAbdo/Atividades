#include <stdio.h>
#include <tchar.h>
#include <iostream>
#include <string>
#include <locale.h>
#include <math.h>
#pragma once

using namespace std;

class Operacao
{
private:
	float valor1 = 0.0, valor2 = 0.0, resultado = 0.0;
	char operador;
public:
	Operacao();
	void leitura();
	void conferir();
	void soma();
	void subtracao();
	void multiplicacao();
	void divisao();
	void potenciacao();
	void exibicao();
};
