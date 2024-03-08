#include<stdio.h>
int mod(); 

int mod()
{
	int a=10,b=20,mod;
	mod=a%b;
	return mod;
}
int main()
{
	int modvalue;
	modvalue=mod();
	printf("modulus =%d\n",modvalue);
	return 0;
}
