#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
	int num1, num2;
	
	printf("input two integers : ");
	scanf("%i %i", &num1, &num2);
	
	printf("+ result is %i\n", num1+num2);
	printf("- result is %i\n", num1-num2);
	printf("* result is %i\n", num1*num2);
	printf("/ result is %i\n", num1/num2);
	printf("%% result is %i\n", num1%num2);
	
	return 0;
}
