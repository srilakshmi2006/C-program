#include<stdio.h>
int main()
{
	int n1=16,n2=24,temp,rem,gcd,lcm;
	gcd=n1;
	temp=n2;
	while(temp!=0)
	{
		rem=gcd%temp;
		gcd=temp;
		temp=rem;
	}
lcm=n1*n2/gcd;
printf("GCD: %d\n",gcd);
printf("LCM: %d\n",lcm);
return 0;
}
