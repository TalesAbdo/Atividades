#include "Classes.h"
#include <stdlib.h>
Operacao::Operacao()
{
	leitura();
	exibicao();
}

void Operacao::leitura()
{	
	do
	{	
		cout << "Digite o primeiro valor: ";
		char svalor1[30];
		gets(svalor1); 
		valor1 = strtod(svalor1);
		if (valor1==NULL)
			cout << "Primeiro valor não aceito. Por favor, ";
		else
			break;
	}while(1);
	
	do
	{	
		cout << "Digite a operação: ";
		cin >> operador;
	
		if((operador =='+') || (operador =='-') || (operador =='*') || (operador =='/') || (operador =='^'))
			break;
		else
			cout<<"Não foi digitado uma operação válida. Por favor, ";
	}while(1);
	
	do
	{
		valor2 = 0.0;
		cout << "Digite o segundo valor: ";
		char svalor2[30],limparBuffer[2];
		gets(limparBuffer);
		gets(svalor2); 
		valor2 = strtod(svalor2);
		if (valor2==NULL)
			cout << "Segundo valor não aceito. Por favor, ";
		else
			break;
	}while(1);
	
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
