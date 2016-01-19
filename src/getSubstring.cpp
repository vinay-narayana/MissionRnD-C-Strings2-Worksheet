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
#include<malloc.h>

char * get_sub_string(char *str, int i, int j){
	if (str == NULL || i>j)
		return NULL;
	int index = 0, index2 = 0;
	char *sub_str = (char *)malloc(sizeof(char)*(j - i));
	for (index = i; index <= j; index++, index2++)
		sub_str[index2] = str[index];
	
	return sub_str;
}
