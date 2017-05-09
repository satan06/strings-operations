#include <stdio.h>

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

