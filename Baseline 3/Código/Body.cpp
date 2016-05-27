#include "Classes.h"

Operacao::Operacao()
{
	cout << "Digite a operação na seguinte ordem: valor1 operador valor2"<<endl;
	scanf("%f %c %f", &valor1, &operador, &valor2);

	if (operador == '+')
		soma();
	else if (operador == '-')
		subtracao();
	else if (operador == '*')
		multiplicacao();
	else if (operador == '/')
		divisao();
}

void Operacao::soma()
{
	cout << valor1 + valor2 << endl;
	cin.ignore();
}

void Operacao::subtracao()
{
	cout << valor1 - valor2 << endl;
	cin.ignore();
}

void Operacao::multiplicacao()
{
	cout << valor1 * valor2 << endl;
	cin.ignore();
}

void Operacao::divisao()
{
	cout << valor1 / valor2 << endl;
	cin.ignore();
}