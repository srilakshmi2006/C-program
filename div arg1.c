#include<stdio.h>
void div(int a,int b); 

void div(int a ,int b)
{
	int div;
	div=a/b;
	printf("division =%d\n",div);
}
int main()
{
	int a=20,b=10;
	div(a,b);
	return 0;
}
