#include <stdio.h>
/**
 * main - Entry point
 * Return 0 (success)
 */
int main(void)
{
	char a;
	int b;
	long int c;
	long long int;
	float f;

	printf("size of the char: %d byte(s)", sizeof(char));
	printf("size of an int: %d byte(s)", sizeof(int));
	printf("size of a long int: %d byte(s)", sizeof(long int));
	printf("size of a long long int: %d byte(s)", sizeof(long long int));
	printf("Size of a float: %d byte(s)", sizeof(float));
	return (0);
}
