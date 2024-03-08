#include<stdio.h>
int sub(); 

int sub()
{
	int a=10,b=20,sub;
	sub=a-b;
	return sub;
}
int main()
{
	int subvalue;
	subvalue=sub();
	printf("subtraction =%d\n",subvalue);
	return 0;
}
