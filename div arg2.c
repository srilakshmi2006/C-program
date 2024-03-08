#include<stdio.h>
int div(); 

int div()
{
	int a=20,b=10,div;
	div=a/b;
	return div;
}
int main()
{
	int divvalue;
	divvalue=div();
	printf("division =%d\n",divvalue);
	return 0;
}
