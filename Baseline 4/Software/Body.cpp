#include "Classes.h"

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
		
		valor1 = atof(svalor1);
		if (valor1==NULL)
			cout << "Primeiro valor nao aceito. Por favor, ";
		else
			break;
	}while(1);
	
	do
	{	
		cout << "Digite a operaçao: ";
		cin >> operador;
	
		if((operador =='+') || (operador =='-') || (operador =='*') || (operador =='/') || (operador =='^'))
			break;
		else
			cout<<"Nao foi digitado uma operaçao válida. Por favor, ";
	}while(1);
	
	do
	{
		cout << "Digite o segundo valor: ";
		char svalor2[30],limparBuffer[20];
		gets(limparBuffer);
		gets(svalor2); 
		valor2 = atof(svalor2);
		
		if (valor2==NULL)
			cout << "Segundo valor nao aceito. Por favor, ";
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
	if (valor1 > 20 && operador=='^')
	{
		cout<< "Limite da base é 20.\n";
		erroPot=1;
	}
	if (((valor1 < 0) || (valor2 < 0)) && (operador=='^'))
	{
		cout <<"Nao é aceito números negativos na potenciaçao.\n";
		erroPot=1;
	}
	if (valor2 > 10 && operador=='^')
	{
		cout<< "Limite do expoente é 10.\n";
		erroPot=1;
	}
}

void Operacao::exibicao()
{
	if (erroPot != 1)
		cout << "\n" << valor1 <<" " << operador <<" "<< valor2 <<" = "<< resultado << endl;
}
