#define MAX_PATH 260
#include <stdio.h>
#include <strings.h>

char *input(char *string_input)
{
    scanf("%s", string_input);
    
    return string_input;
}

int check(char *string_input)
{
	if (slen(string_input) > MAX_PATH) {
		return -2;
	} else if (sspn(string_input) == -1) {
		return -1;
	}

	return 0;
}

char *process(char *string_input, char item) 
{
	if(string_input != NULL) {
		for(int i = slen(string_input); string_input[i] != item; i--) {
    		if ('a' <= string_input[i] && string_input[i] <= 'z') {
      			string_input[i] += 'A' - 'a';
    		}		
    	}
		return string_input;
	}
	return NULL;
}