#pragma once

#define _STR_ argv[1]
#define _SPACE_ ' '
#define _DOT_ .
#define _DASE_ -

#include <unistd.h>
#include <stdbool.h>
#include <stdlib.h>


char **mx_strsplit(const char *s, char c);
int mx_count_words(const char *str, char c);
char *mx_strndup(const char *s1, size_t n);
char *mx_strncpy(char *dst, const char *src, int len);
char *mx_strnew(const int size);
int mx_count_letters(const char *s, char c);
int mx_strlen(const char *s);
int mx_strcmp(const char *s1, const char *s2);
void mx_printstr(const char *s);
void mx_printerr(const char *s);
