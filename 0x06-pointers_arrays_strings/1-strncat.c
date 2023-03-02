nclude "main.h"
/**
 *  * _strncat - concate
 *   * @dest: great
 *    * @src: source
 *     * @n: bytes
 *      *
 *       * Return: dest
 */

char *_strncat(char *dest, char *src, int n)
{
	char *pr = dest;

	while (*pr != '\0')
	{
		pr++;
	}
	while (n--)
	{
		while (!(*pr++ = *src++))
		{
			return (dest);
		}
	}
	return (dest);
}
