/*
OVERVIEW: Given a string, Return the substring of the main string from i index to j index
Indexes start from 0,ith letter and jth letter are included
E.g.: Input: "get_sub_string("abcdefgh",2,5) , Output: "cdef"

INPUTS: A string.

OUTPUT: return substring from [i,j]

INPUT2: I will Code for Mission RnD , 2,10
OUTPUT2:will Code

NOTES: Check Null Strings ,Include stddef for NULL if needed.Create a New string and return it ,dont modfiy
original String
*/

#include <stddef.h>
#include <stdlib.h>

char * get_sub_string(char *str, int i, int j)	{	


	int p=0, k; char *sub_str;
	
	if (str == NULL)
		return NULL;
	else if (i <= j)
	{
		sub_str = (char *)malloc((j - i)*sizeof(char));
		for (p = i, k = 0; p <= j; p++, k++)
		{
				sub_str[k] = str[p];
		}
		sub_str[k] = '\0';
		
		return sub_str;
	}
	else
		return NULL;
}
