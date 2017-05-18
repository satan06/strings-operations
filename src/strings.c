#include <stdio.h>
#include <strings.h>

char *schr(const char *str, const char item)
{
    while (*str && *str != item) {
        ++str;
    }
    return (*str) ? (char *) str : NULL;
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
            if ((i_str[i] == '\\') && (i_str[i + 1] == '\\')) {
                return -1;
            }
            if (i_str[i] == f_str[k]) {
                return -1;
            }
        }
    }
    return 0;
}

int sspn_l(const char *i_str)
{
    char f_str[] = {':', '*', '?', '"', '<', '>', '|'};
    
    for (int i = 0; i_str[i] != '\0'; i++) {
        for (int k = 0; k < slen(f_str); k++) {
            if (i_str[i] == f_str[k] || ((i_str[i] == '/') && (i_str[i + 1] == '/'))) {
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

char *sstok(char *str, const char *delim) 
{
    static char *buffer;
    
    if (str) {
        buffer = str;
        while (*buffer && schr(delim, *buffer)) {
            *buffer++ = '\0';
        }
    }
    
    if (! *buffer) {
        return NULL;
    }
    
    str = buffer;
     
    while (*buffer && ! schr(delim, *buffer)) {
        ++buffer;
    }
    while (*buffer && schr(delim, *buffer)) {
        *buffer++ = '\0';
    }
    
    return str;
}

char *scpy(char *n_str, const char *i_str)
{
    while(*i_str) {
        *n_str++ = *i_str++;    
    } 
    *n_str++ = '\0';
    
    return n_str;
}

const char *valwin_nme(const char *str)
{
  for(int i = 0; str[i] != '\0'; ++i) {
    if(('a' <= str[0] && str[0] <= 'z') || 
        ('a' <= str[1] && str[1] <= 'z') || 
        ('A' <= str[0] && str[0] <= 'A') || 
        ('A' <= str[1] && str[1] <= 'Z')) {
        return str;
    }
  }
  return NULL;
}