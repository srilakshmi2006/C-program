#include<stdio.h>
void mul(int a,int b); 

void mul(int a ,int b)
{
	int mul;
	mul=a*b;
	printf("multiplication =%d\n",mul);
}
int main()
{
	int a=10,b=20;
	mul(a,b);
	return 0;
}
