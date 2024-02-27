#include<stdio.h>
int main()
{
	int arr[9]={1,4,5,7,9,4,6,3,};
	int i,j;
	for(i=0;i<=9;i++)
	{
		for (j=i+1;j<9;j++)
{
	if (arr[i]==arr[j])
	{
		printf("%d is a duplicate elemnt in an array\n",arr[i]);
		break;
	}
	
}
	}
	return 0;
}

