#include <stdio.h>
/**
 * main - assigns a random number to int n everytime
 * Analogy: prints letters except for e and q
 * Return: Always 0 (Seun == Success)
 */
int main(void)
{
char c;
c = 'a';
while (c <= 'z')
{
if (c == 'e')
{
c++;
continue;
}
if (c == 'q')
{
c++;
continue;
}
putchar(c);
c++;
}
putchar('\n');
return (0);
}
