/*

Problem : Return the Count of how many times the word occurred in given string in two ways
Way1: Not using Recursion
Way2:Using Recursion [Optional]

Input : "Hello HelloAgain HelloAGAINAGAIN commonItsHelloagain","Hello"
Output : 4

Note: Dont modify original str or word,Just return count ,Spaces can also be part of words like "ab cd" in "ab cd ab cd" returns 2
*/

#include <stdlib.h>

int count_word_in_str_way_1(char *str, char *word){
	int i, j = 0, len = 0, count = 0, start = 0;
	for (i = 0; word[i] != '\0'; i++)
		len++;
	for (start = 0; str[start] != '\0'; start++)
	{
			j = 0;
			while (j < len && str[start + j] == word[j] && str[start + j] != '\0')
				j++;
			if (j == len)
				count++;
		
	}
		return count;
}

int count_word_int_str_way_2_recursion(char *str, char *word){
	return 0;
}

