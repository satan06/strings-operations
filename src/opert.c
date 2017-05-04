#define MAX_PATH 260
#include <stdio.h>

char *input(char string_input[MAX_PATH])
{
	if (MAX_PATH > 260) {
		return NULL;
	} else 
    	scanf("%s", string_input);
    
    	return string_input;
}