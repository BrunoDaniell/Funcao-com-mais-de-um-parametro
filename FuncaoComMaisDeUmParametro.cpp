#include <iostream>
#include <stdio.h>
#include <stdlib.h>

using namespace std;

int retornaSoma(int priemiroValor, int segundoValor);

int main()
{
	
	int a, b;

	a = 10;
	b = 50;
	

	//mostrando a soma

	retornaSoma(a, b);
	printf("\nA soma de %d e %d e: %d", a, b, retornaSoma(a, b));

}

int retornaSoma(int priemiroValor, int segundoValor){

	return priemiroValor + segundoValor;

}

