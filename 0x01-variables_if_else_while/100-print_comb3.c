#include <stdio.h>
/**
 * main - assigns a random number to int n everytime
 * Analogy: prints double number
 * Return: Always 0 (Seun == Success)
 */
int main(void)
{
int s, num1, num2;
s = 0;
while (s <= 90)
{
num1 = s / 10;
num2 = s % 10;
if (num1 >= num2)
{
s++;
continue;
}
putchar(num1 + '0');
putchar(num2 + '0');
if (s != 89)
{
putchar(',');
putchar(' ');
}
s++;
}
putchar('\n');
return (0);
}
