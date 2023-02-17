#include <stdio.h>
/**
 * main - assigns a random number to int n everytime
 * Analogy: prints all the numbers of base 16 in lowercase,
 * Return: Always 0 (Seun == Success)
 */
int main(void)
{
char s;
for (s = '0'; s <= '9'; s++)
{
	putchar(s);
}
for (s = 'a'; s <= 'f'; s++)
{
	putchar(s);
}
putchar('\n');
return (0);
}
