#include<stdio.h>
int sub(int a,int b); 

int sub(int a,int b)
{
	int sub;
	sub=a-b;
	return sub;
}
int main()
{
	int a=10,b=20,subvalue;
	subvalue=sub(a,b);
	printf("subtraction =%d\n",subvalue);
	return 0;
}
