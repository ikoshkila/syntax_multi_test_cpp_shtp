#include "header.h"

int sum(int a, int b){
	if(a == 20){
		volatile int *ptr = (int*)0;
		*ptr = 0;
	}
	return a + b;
}