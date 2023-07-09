#include <stdio.h>
#include <math.h>

int main(void)
{
	/* init the variables */
	int i, num, copy, len = 0;
	double result = 0;

	/* get the number */
	printf("Enter your number : ");
	scanf("%d", &num);
	/* save the number by taking a copy of it */
	copy = num;
	/* get the length of the given number */
	while (copy > 0)
	{
		copy /= 10;
		len++;
	}
	/* get the copy again to save the digit */
	copy = num;
	/* calt the power of each number */
	while (copy > 0)
	{
		result += pow((double) (copy % 10), (double) len);
		copy /= 10;
	}
	/* print the result */
	if (result == num)
		printf("Your number (%d) is an armstrong.\n", num);
	else
		printf("Your number (%d) is not an armstrong.\n", num);
}