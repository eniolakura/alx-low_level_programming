#include <stdio.h>
#include <stdlib.h>
/**
 * main - multiplies two numbers
 * @argc: number of command line arguments
 * @argv: array containing arguments
 * Return: 0 - success
 */
int main(int argc, char *argv[])
{
	if (argc != 3)
	{
		printf("error\n");
	}
	printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
	return (0);
}
