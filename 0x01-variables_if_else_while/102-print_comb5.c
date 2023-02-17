#include <stdio.h>
/**
 * main - assigns a random number to int n everytime
 * Analogy: prints all possible different combinations of three digits.
 * Return: Always 0 (Seun == Success)
 */
int main(void)
{
int i, j;
for (i = 0; i < 100; i++)
{
for (j = 0; j < 100; j++)
if (i < j)
{
putchar((i / 10) + '0');
putchar((i % 10) + '0');
putchar(' ');
putchar((j / 10) + '0');
putchar((j % 10) + '0');
if (i != 98 || j != 99)
{
putchar(',');
putchar(' ');
}
}
}
putchar('\n');
return (0);
}
