#include <stdio.h>
/**
 * main - assigns a random number to int n everytime
 * Analogy: prints all possible combinations of single-digit numbers.
 * Return: Always 0 (Seun == Success)
 */
int main(void)
{
int s;
for (s = 0; s <= 9; s++)
{
putchar((s % 10) + '0');
if (s == 9)
continue;
putchar(',');
putchar(' ');
}
putchar('\n');
return (0);
}
