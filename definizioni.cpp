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