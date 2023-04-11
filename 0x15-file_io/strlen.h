/**
 *_strlen - this returns the leghth of a string
 *@s: this is a string
 * Return: lenght of string s
 *
int _strlen(char *s)
{
	int j = 1;

	if (*s == '\0')
	       return (0);

	if (*(s + 1) > '\0')
	j = j + _strlen(s+1);

	return (j);
}
*/