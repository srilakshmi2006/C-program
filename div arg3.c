#include<stdio.h>
int div(int a,int b); 

int div(int a,int b)
{
	int div;
	div=a/b;
	return div;
}
int main()
{
	int a=20,b=10,divvalue;
	divvalue=div(a,b);
	printf("division =%d\n",divvalue);
	return 0;
}
