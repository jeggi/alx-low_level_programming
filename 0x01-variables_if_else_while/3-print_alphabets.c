#include <stdio.h>
/**
 * main - assigns a random number to int n everytime
 * Analogy: prints letters - lowercase
 * Return: Always 0 (Seun == Success)
 */
int main(void)
{
char c, C;
c = 'a';
C = 'A';
while (c <= 'z')
{
putchar(c);
c++;
}
while (C <= 'Z')
{
putchar(C);
C++;
}
putchar('\n');
return (0);
}
