#include<stdio.h>
int mul(int a,int b); 

int mul(int a,int b)
{
	int mul;
	mul=a*b;
	return mul;
}
int main()
{
	int a=10,b=20,mulvalue;
	mulvalue=mul(a,b);
	printf("multiplication =%d\n",mulvalue);
	return 0;
}
