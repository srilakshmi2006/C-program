#include<stdio.h>
int mul(); 

int mul()
{
	int a=10,b=20,mul;
	mul=a*b;
	return mul;
}
int main()
{
	int mulvalue;
	mulvalue=mul();
	printf("multiplication =%d\n",mulvalue);
	return 0;
}
