#include <stdio.h>
#include <strings.h>

int sspn_alpha(const char* i_str, char item)
{
    for( ; *i_str; ++i_str ) {
        if( *i_str == item ) 
        	return -1;
    }
    return 0;
}

int slen(const char *str) 
{   
    int length = 0;
    
    while(*str != '\0') {
        ++length;
        ++str;
    }
    return length;
}

int sspn(const char *i_str)
{
    char f_str[] = {':', '*', '?', '"', '<', '>', '|'};
    
    for (int i = 0; i_str[i] != '\0'; i++) {
        for (int k = 0; k < slen(f_str); k++) {
            if ((i_str[i] == f_str[0]) && (i_str[i + 1] == '\\')) {
                continue;
            }
            if (i_str[i] == f_str[k]) {
                return -1;
            }
        }
    }
    return 0;
}

char *c_upper(char *i_str)
{
	if(i_str != NULL) {
		for (int i = 0; i_str[i] != '\0'; i++) {
    		if ('a' <= i_str[i] && i_str[i] <= 'z') {
      			i_str[i] += 'A' - 'a';
    		}		
		}
		return i_str;
	}
	return NULL;
}

