#include<stdio.h>
void sub(int a,int b); 

void sub(int a ,int b)
{
	int sub;
	sub=a-b;
	printf("subtraction =%d\n",sub);
}
int main()
{
	int a=10,b=20;
	sub(a,b);
	return 0;
}
