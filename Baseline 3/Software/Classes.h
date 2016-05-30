#include <stdio.h>
#include <tchar.h>
#include <iostream>
#include <string>
#include <locale.h>
#include <math.h>
#include <stdlib.h> 
#include <string>
#pragma once

using namespace std;

class Operacao
{
private:
	float valor1, valor2, resultado = 0.0;
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
