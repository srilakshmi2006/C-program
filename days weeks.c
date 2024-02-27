#include<stdio.h>
int main()
{
	int Days,years,weeks,days;
	days=400;
	years=days/365;
	weeks=(days%365)/7;
	days=days-((years*365)+(weeks*7));
	printf("years=%d weeks=%d days=%d",years,weeks,days);
	return 0;
}
