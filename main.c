#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
	int year, result;
	
	printf("input the year : ");
	scanf("%i", &year);
	
	result = ((year%4==0) && (year%100!=0)) || (year%400==0);
	
	printf("is the year %i the leap year? : %i\n", year, result);

	return 0;
}
