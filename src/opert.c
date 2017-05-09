#define MAX_PATH 260
#include <stdio.h>
#include <strings.h>

char *input(char string_input[MAX_PATH])
{
    scanf("%s", string_input);
    
    return string_input;
}

int check(char string_input[MAX_PATH])
{
	if ((MAX_PATH > 260) || (sspn(string_input) == -1)) {
		return -1;
	} else {
		return 0;
	}
}