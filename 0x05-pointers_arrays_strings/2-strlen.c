/**
 * _strlen - is a function that returns the length of a string
 *
 * @s: is the parameter to calculate the length of string
 *
 * Return: lenght of string
 */

int _strlen(char *s)
{
	int i;

	i = 0;
	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}
