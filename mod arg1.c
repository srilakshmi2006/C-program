#include<stdio.h>
void mod(int a,int b); 

void mod(int a ,int b)
{
	int mod;
	mod=a%b;
	printf("modulus =%d\n",mod);
}
int main()
{
	int a=10,b=20;
	mod(a,b);
	return 0;
}
