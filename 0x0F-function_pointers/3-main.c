#include "3-calc.h"
/**
 * main - main func
 * @argc: number of args
 * @argv: array of args
 *
 * Return: result of operation
 */
int main(int argc, char *argv[])
{
	int n1, n2, res;
	char op;
	int (*f)(int, int);


	if (argc < 4 || argc > 4)
	{
		printf("Error\n");
		exit(98);
	}

	n1 = atoi(argv[1]);
	n2 = atoi(argv[3]);
	f = get_op_func(argv[2]);

	if (f == NULL)
	{
		printf("Error\n");
		exit(99);
	}

	op = *argv[2];
	if (n2 == 0 && (op == '/' || op == '%'))
	{
		printf("Error\n");
		exit(100);
	}

	res = f(n1, n2);
	printf("%d\n", res);
	return (0);
}
