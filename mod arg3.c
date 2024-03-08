#include<stdio.h>
int mod(int a,int b); 

int mod(int a,int b)
{
	int mod;
	mod=a%b;
	return mod;
}
int main()
{
	int a=10,b=20,modvalue;
	modvalue=mod(a,b);
	printf("modulus =%d\n",modvalue);
	return 0;
}
