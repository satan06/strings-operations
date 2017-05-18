#ifndef STRINGS_H
#define STRINGS_H

char *schr(const char *str, const char item);
int slen(const char *str); 
int sspn(const char *i_str);
int sspn_l(const char *i_str);
char *c_upper(char *i_str);
char *sstok(char *str, const char *delim); 
char *scpy(char *n_str, const char *i_str);
char *valwin_nme(char *str);

#endif//STRINGS H