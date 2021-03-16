#pragma once

#include <unistd.h>
#include <stdbool.h>
#include <stdlib.h>

int mx_atoi(const char *s);
int	mx_isspace(int c);
int mx_isdigit(int c);
int mx_islower(int c);
int mx_isupper(int c);
void mx_printerr(const char *s);
int mx_strlen(const char *s);
