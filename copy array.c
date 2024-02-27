#include<stdio.h>
int main()
{
	int a[10]={0,1,2,3,4,5,6,7,8,9};
	int copy[10];
	int i;
	for(i=0;i<10;i++)
	{
		copy[i]=a[i];
	}
     printf("original-->copy\n");
     for(i=0;i<10;i++)
     {
     	printf("%d %d\n",a[i],copy[i]);
	 }
	 return 0;
}
