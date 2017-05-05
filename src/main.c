#define MAX_PATH 260
#include <stdio.h>
#include <opert.h>

int main()
{
	char string_input_user[MAX_PATH];

	printf("Enter path: ");
	printf("Path: %s\n", input(string_input_user));

	return 0;
}