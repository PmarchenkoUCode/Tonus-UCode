#include "baconian.h"

int mx_atoi(const char *s) {
	int n = 0, neg = 0;
	while (mx_isspace(*s)) s++;
	switch (*s) {
	case '-': neg=1;
	case '+': s++;
	}
	while (mx_isdigit(*s))
		n = 10 * n - (*s++ - '0');
	return neg ? n : -n;
}
