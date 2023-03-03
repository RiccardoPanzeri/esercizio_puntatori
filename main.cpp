#include <iostream>
#include <cmath>
#include "prototipi.h"

using namespace std;

int main() {
	//esercizio1: dichiaro dei puntatori di tipo int e li passo per riferimento in una funzione che li eleva al quadrato, dopodichè li sommo;  
	int a = 4;
	int b = 8;
	int res = 0;
	int* pa = &a;
	int* pb = &b;
	quad(*pa);
	quad(*pb);
	res = *pa + *pb;
	cout <<"Il risultato è: "<< res << endl;
	//esercizio2: dichiaro due puntatori di tipo int e li passo per riferimento a una funzione che li scambia:
	int c = 12;
	int d = 17;
	int* pc = &c;
	int* pd = &d;
	scambia(*pc, *pd);
	cout << "c = " << *pc << " d = " << *pd << endl;

	//esercizio3: dichiaro dei puntatori di tipo intero e li passo per riferimento a una funzione che ne calcola il fattoriale:
	int e = 5;
	int f = 7;
	int g = 10;
	int* pe = &e;
	int* pf = &f;
	int* pg = &g;
	fattoriale(*pe);
	fattoriale(*pf);
	fattoriale(*pg);
	cout << "Stampo i numero fattoriali: " << *pe << endl << *pf << endl << *pg << endl;






	return 0;
}
