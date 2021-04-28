#include "func.h"
#define N 100000 
#define MOD 211
void random(float* arr)
{
	int f0 = 1;
	int f1 = 1;
	int f2 = 1;
	int f;
	int i = 0;
	for (i = 0; i < N; i++)
	{
		f = (f0 + f1 + f2) % MOD;
		arr[f]++;
		f0 = f1;
		f1 = f2;
		f2 = f;
	}
}