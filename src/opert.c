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

char *process(char *string_input) 
{
	char *a[MAX_PATH]; 
    int i = 0;

	if(string_input != NULL) {
		a[i++] = sstok(string_input, "/\\:");

        while(a[i - 1] != NULL) {
            a[i++] = sstok(NULL, "/\\");
        }

        for(int k = i - 3; k >= 0; k--) {
        	printf("%s/", a[k]);
    	}

    	printf("%s\n", c_upper(a[i - 2]));

		return string_input;
	}
	return NULL;
}
