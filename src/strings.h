#ifndef STRINGS_H
#define STRINGS_H

int sspn_alpha(const char* i_str, char item);
int slen(const char *str); 
int sspn(const char *i_str);
char *c_upper(char *i_str);
char *stok_a(char *str, char div_s, int m_tok, int m_len);
char **stok_b(char *str, char **t_str, char div_s);

#endif//STRINGS H