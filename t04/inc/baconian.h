#pragma once

#include <unistd.h>
#include <stdlib.h>


int mx_atoi(const char *s);
int	mx_isspace(int c);
int mx_isdigit(int c);
int mx_islower(int c);
int mx_isalpha(int c);
int mx_isupper(int c);
size_t mx_strlen(const char *str);
int mx_strncmp(const char *s1, const char *s2, int n);
char *mx_strnew(const int size);
int mx_count_letters(char *str);
int mx_decode_bacon(char c[5]) ;
char mx_lettershift (char c, int shift);
