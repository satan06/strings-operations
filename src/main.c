#define MAX_PATH 260
#include <stdio.h>
#include <opert.h>

int main()
{
	char string_input_user[MAX_PATH];

	printf("Enter path: ");
	input(string_input_user);
	
	if (check(string_input_user) == -2) {
		printf("Symbol limit exceeded!\n");
	} else if(check(string_input_user) == -1) {
		printf("Detected forbidden symbols!\n");
	} else {
		printf("Path: %s\n", string_input_user);
	}

	return 0;
} 