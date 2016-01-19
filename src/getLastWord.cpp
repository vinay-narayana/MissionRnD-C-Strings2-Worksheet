/*

Problem : Return the Last word in a string

Input : I will do this without using String Library
Output : Library

Note:Dont modify original string Neglect Spaces at the right end and at left end if required .
->Create a new string and return it , Use dynamic memory allocation .
*/
#include <stdlib.h>
int is_alpha_num(char ch)
{
	if ((ch >= 'a' && ch <= 'z') || (ch >= 'a' && ch <= 'z'))
		return 1;
	else
		return 0;
}
char * get_last_word(char * str){
	if (str == NULL)
		return NULL;

	int index, space_index = 0, sec_index = 0, str_len;
	for (index = 0; str[index] != '\0'; index++)
	{
		if (str[index] == 32 && is_alpha_num(str[index + 1]))
		{
			space_index = index + 1;
		}
	}
	str_len = index;
	char *last_word = (char *)malloc(sizeof(char)*(index - space_index + 1));
	if (is_alpha_num(str[space_index]))
	{
		for (index = space_index; str[index] != '\0'; index++)
		{
			if (str[index] != 32)
			{
				last_word[sec_index] = str[index];
				sec_index++;
			}

		}
		last_word[str_len - (index - sec_index)] = NULL;
	}
	else
		last_word[space_index] = NULL;

	return last_word;
}