#pragma once

#include <unistd.h>
#include <stdlib.h>

int mx_atoi(const char *s);
int	mx_isspace(int c);
int mx_isdigit(int c);
int mx_islower(int c);
int mx_isalpha(int c);
int mx_isupper(int c);
void mx_printerr(const char *s);
void mx_printchar(char c);
int mx_strncmp(const char *s1, const char *s2, int n);
size_t mx_strlen(const char *str);
char *mx_strnew(const int size);
