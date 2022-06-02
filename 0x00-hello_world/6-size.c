#include <stdio.h>
/**
 * main - prints the size of a bunch of data types
 *
 * Return: 0
 */
int main(void)
{
	printf("size of a char:%2lu byte(s)\n", sizeof(char));
	printf("size of an int:%2lu byte(s)\n", sizeof(int));
	printf("size of a long int:%2lu byte(s)\n", size(long int));
	printf("size of a long long int:%2lu byte(s)\n", sizeof(long long int));
	printf("size of a float:%2lu byte(s)\n", sizeof(float));
	return (0);
}
