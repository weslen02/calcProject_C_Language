/*-----------------------

	By Dev: Weslen Almeida
	Date: 	11/15/2018
-------------------------*/

//Include Guard >> garantia de arquivo idempotente (propriedade que a operação tem de ser aplicada várias vezes, sem serem alteradas)
#ifndef MASTERHEADERHANDLER_H_INCLUDED //se não estiver definido
#define MASTERHEADERHANDLER_H_INCLUDED //defina aqui!

#include <stdio.h>//standard input output
#include <stdlib.h>
#include <conio.h>//necessario para funcoes como getch()
#include <math.h>

//-------------------------------------------------------------------------------------
//CONSTANTES PARA VERIFICAR ERRO NO MENU
#define _TEXTERROR "\t\t|\t\t!!!ERRO, ESTA NAO EH UMA OPCAO DO MENU!!!\t\t\t|"
#define _ERROR -1
//PROTOTIPO FUNCAO PARA VERIFICAR ERRO NO MENU
int errorMenuHandler(int op, int sizeV);
//-------------------------------------------------------------------------------------

//------------------------------------------------------------------------------------
//prototipo funcoes para MENUS de calculos especificos
void sumMenuHandler();
/*void constantMenuHandler();
void propLogicMenuHandler(); //propositional logic - lógica proposicional
void matrixMenuHandler();
void funcMenuHandler(); //function - função
void combMenuHandler(); //combinatorial - combinatório
void numDerivMenuHandler(); //numeric derivative - derivada numérica
void numIntegMenuHandler();//Numerical Integration - integração númerica*/
//-------------------------------------------------------------------------------------

//-------------------------------------------------------------------------------------
//PROTOTIO FUNCOES SOMATORIO
void getValueSumHandler(int opt);
void oneSumHandler();
void twoSumHandler();
void threeSumHandler();
//-------------------------------------------------------------------------------------

//-------------------------------------------------------------------------------------
//estrutura inseirir valor nos calculos
typedef struct{
	float k;
	float a;
	float m;
	float n;
	float p;
	float x;
}SETVALUE;

//declarando variavel para estrutura tipo setvalue
SETVALUE insertValue;
//-------------------------------------------------------------------------------------
#endif // MASTERHEADERHANDLER_H_INCLUDED
