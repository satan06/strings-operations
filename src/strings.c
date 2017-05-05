#include <stdio.h>

int sspn(const char* f_str, char item)
{
    for( ; *f_str; ++f_str ) {
        if( *f_str == item ) 
        	break;

        	return -1;
    }
    return 0;
}