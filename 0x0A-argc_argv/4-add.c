#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
/**
 * main - Prints the addition of positive numbers, followed by a new line
 * @argc: The number of arguments passed to the program.
 * @argv: An array of pointers to the arguments.
 *  Return: If one of the numbers contains symbols that are non-digits - 1
 *  otherwise - 0
 */
int main(int argc, char *argv[])
{
	int i, j, add = 0;

	for (i = 1; i < argc; i++)
	{
		for (j = 0; argv[i][j] != '\0'; j++)
		{
			if (argv[num][digit] < '0' || argv[num][digit] > '9')
			{
				printf("Error\n");
				return (1);
			}
		}
		sum += atoi(argv[num]);
	}
	printf("%d\n", sum);
	return (0);
}
