#pragma once

#include <unistd.h>
#include <stdlib.h>

int mx_atoi(const char *s);
int	mx_isspace(int c);
int mx_isdigit(int c);
int mx_islower(int c);
int mx_isalpha(int c);
int mx_isupper(int c);
int mx_keyshift(char c);
size_t mx_strlen(const char *str);
char mx_lettershift (char c, int shift);

