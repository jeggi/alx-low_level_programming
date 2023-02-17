#include <stdio.h>
/**
 * main - assigns a random number to int n everytime
 * Analogy: character in reverse order
 * Return: Always 0 (Seun == Success)
 */
int main(void)
{
char s;
for (s = 'z'; s >= 'a'; s--)
{
putchar(s);
}
putchar('\n');
return (0);
}
