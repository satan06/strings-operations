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