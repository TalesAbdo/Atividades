#include "Classes.h"

Operacao::Operacao()
{
	leitura();
	conferir();
	exibicao();
}

void Operacao::leitura()
{
	cout << "Digite o primeiro valor: ";
	cin >> valor1;
	cout << "Digite a operação: ";
	cin >> operador;
	cout << "Digite o segundo valor: ";
	cin >> valor2;
}

void Operacao::conferir()
{
	if (operador == '+')
		soma();
	else if (operador == '-')
		subtracao();
	else if (operador == '*')
		multiplicacao();
	else if (operador == '/')
		divisao();
	else if (operador == '^')
		potenciacao();
}

void Operacao::soma()
{
	resultado = valor1 + valor2;
}

void Operacao::subtracao()
{
	resultado = valor1 - valor2;
}

void Operacao::multiplicacao()
{
	resultado = valor1 * valor2;
}

void Operacao::divisao()
{
	resultado = valor1 / valor2;
}

void Operacao::potenciacao()
{
	resultado = pow(valor1, valor2);
}

void Operacao::exibicao()
{
	cout << valor1 <<" " << operador <<" "<< valor2 <<" = "<< resultado << endl;
	cin.ignore();
}
