#include<stdio.h>
/**
 *main - entry point
 *@argc: number of command line arguments
 *@argv: array of command line arguments
 *Return: 0
 */

int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}
