/*

Problem : Return the Last word in a string

Input : I will do this without using String Library
Output : Library

Note:Dont modify original string Neglect Spaces at the right end and at left end if required .
->Create a new string and return it , Use dynamic memory allocation .
*/
#include <stdlib.h>

char * get_last_word(char * str){
	char *sub_str;
	int i, len=0, p=0,j;
	if (str == NULL)
		return NULL;
	else
	{
		for (i = 0; str[i] != '\0'; i++)
			len++;
		
		for (i = len; str[i] != ' '; i--)
		{
			p++;
		}
		sub_str = (char *)malloc(p*sizeof(char));
		for (i = len - p,j=0; str[i] != '\0'&& str[i]!=' '; i++,j++)
		{
			sub_str[j] = str[i];
		}
		sub_str[j] = '\0';
		return sub_str;
	}
}
