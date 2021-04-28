// 6. написать генератор псевдослучайных чисел по алгоритму f(n) = f(n-1) + f(n-2) + f(n-3) mod 211; f(0) = f(1) = f(2) = 1. Подсчитать частоту каждого числа при выборке 100000
#include <stdio.h>
#include "func.h"
#define N 100000 
#define MOD 211


int main() {
	float s[MOD] = { 0 };
	random(s);
	for (int i = 0; i < MOD; i++) 
	{
		printf("%d - %f\n", i, s[i] / N);
	}
	return 0;
} 