#include<stdio.h>
void sub(); 

void sub()
{
	int a=10,b=20,sub;
	sub=a-b;
	printf("subtraction =%d\n",sub);
}
int main()
{
	sub();
	return 0;
}
