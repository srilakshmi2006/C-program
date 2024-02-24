#include<math.h>
int main()
{
	double res,n=3,sum=0,i,ser;
	for(i=1;i<=n;i++)
	{
		ser=1/pow(i,i);
		sum=sum+ser;
	}
	printf("%.3f",sum);
	return 0;
}
