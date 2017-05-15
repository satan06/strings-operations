#define MAX_PATH 260
#define RED "\x1B[31m"
#define GRN "\x1B[32m"
#define RESET "\x1B[0m"
#include <stdio.h>
#include <strings.h>
#include <malloc.h>

char *input(char *string_input)
{
    scanf("%s", string_input);
    
    return string_input;
}

int check(const char *string_input)
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
	char **a = malloc((slen(string_input) + 1) * sizeof(char *)); 
    int i = 0;

	if(string_input != NULL) {
		if(schr(string_input, '/')) {
			if(schr(string_input, '/') && schr(string_input, '\\') && (sspn_l(string_input) == -1)) {

				return NULL;

			} else {
				printf("OS: Linux\n");
				a[i++] = sstok(string_input, "/\0");

        		while(a[i - 1] != NULL) {
            		a[i++] = sstok(NULL, "/\0");
        		}

        		printf("Updated path: /");
        		for(int k = i - 3; k >= 0; k--) {
        			printf("%s/", a[k]);
    			}
    			printf("%s\n", c_upper(a[i - 2]));

    			return string_input;
			}
		} else {
 			if(schr(string_input, '\\') && schr(string_input, '/') && (sspn(string_input) == -2)) {

				return NULL;

			} else {
				printf("OS: Windows\n");
				a[i++] = sstok(string_input, ":\\\0");

        		while(a[i - 1] != NULL) {
           			a[i++] = sstok(NULL, ":\\\0");
        		}

       			printf("Updated path: %s:\\", a[0]);
       			for(int k = i - 3; k > 0; k--) {
       				printf("%s\\", a[k]);
   				}
   				printf("%s\n", c_upper(a[i - 2]));
    		
    			return string_input;
			}
		}
	}
	free(a);

	return NULL;
}


void output(char *string_input) 
{
	if (check(string_input) == -2) {
		printf("Checking process: ");
		printf(RED "[FAIL]\n" RESET);		
		printf("Symbol limit exceeded!\n");
	} else if(check(string_input) == -1) {
		printf("Checking process: ");
		printf(RED "[FAIL]\n" RESET);
		printf(RED "Detected forbidden symbols!\n" RESET);
	} else {
		printf("Checking process: ");
		printf(GRN "[OK]\n" RESET);
		if(process(string_input) == NULL) {
			printf("Specific path properties: ");
			printf(RED "[FAIL]\n" RESET);
			printf("Check input data!\n");
		}	
	}
}

