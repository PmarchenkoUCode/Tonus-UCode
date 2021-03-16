#pragma once

#include <stdlib.h>
#include <stdbool.h>
#include <unistd.h>


bool mx_isdigit(int c);
bool mx_isspace(char c);
int mx_strlen(const char *s);
int mx_atoi(const char *str);
void mx_printchar(char c);
void mx_printerr(const char *s);
char *mx_strncpy(char *dst, const char *src, int len);
char *mx_strndup(const char *s1, unsigned long n);
char *mx_strnew(const int size);
char *mx_strcat(char *s1, const char *s2);
