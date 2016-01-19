/*

Problem : Return the Last word in a string

Input : I will do this without using String Library
Output : Library

Note:Dont modify original string Neglect Spaces at the right end and at left end if required .
->Create a new string and return it , Use dynamic memory allocation .
*/
#include <stdlib.h>

char * get_last_word(char * str)
{
	if (str == NULL)
	return NULL;
	char *s;
	int one=0, two=0,i=0,l=0;
	while (str[two] != '\0')
	{
		if (str[two] == ' ')
		{
			if (str[two + 1] != ' ' && str[two + 1] != '\0')
			{
				one = two;
			}
		}
		two++;
	}
	for (i = one; i < two; i++)
	{
		if (str[i] != ' '&&str[i] != '\n')
			l++;
	}
	s = (char *)malloc(sizeof(char)*(l + 1));
	i = 0;
	while (one < two)
	{
		if (str[one] != ' ')
			s[i++] = str[one];
		one++;
	}
	s[l] = '\0';
	return s;
}

