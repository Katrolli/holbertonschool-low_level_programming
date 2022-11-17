/**
 * binary_to_uint - main function
 * @b: string of binary
 * Return: returns the convertet nr
 */
unsigned int binary_to_uint(const char *b)
{
	int i = 0, j;
	unsigned int num = 1, un = 0;

	if (b == NULL)
		return (0);
	while (b[i] != '\0')
		i++;
	for (j = i - 1; b[j] != '\0'; j--)
	{
		if (b[j] != '0' && b[j] != '1')
		{
			return (0);
		}
		if (b[j] == '1')
			un += num;
		num *= 2;
	}
	return (un);
}
