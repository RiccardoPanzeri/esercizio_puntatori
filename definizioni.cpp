#include <iostream>
#include <cmath>
#include "prototipi.h"

using namespace std;

void quad(int &a) {
	a = pow(a, 2);
}



void scambia(int &a, int &b) {
	int temp = 0;
	temp = a;
	a = b;
	b = temp;

}
void fattoriale(int &a) {
	if (a != 0) {//se il numero é zero, non serve calcolarne il fattoriale;
		int x = a - 1;
		while (x > 0) {//calcolo il fattoriale del numero;
			a *= x;
			x--;
		}
	}
	else {
		a = 1;//per convenzione, il fattoriale di 0 è 1;
	}
}