#include <stdio.h>

/**
 * main -main function
 *
 * Return: o on success
 */

int main(void)
{
	printf("Size of a char: %lu 1 byte(s)", sizeof(char));
	printf("size of int: %lu 4 byte(s)", sizeof(int));
	printf("size of a long int: %lu 4 byte(s)", sizeof(long long int));
	printf("size of a long long int: %lu 8 byte(s)", sizeof(long long int));
	printf("Size of a float: %lu 4 byte(s)", sizeof(float));
	return (0);
}
