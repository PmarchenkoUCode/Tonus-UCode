#include "baconian.h"

int mx_count_letters(char *str) {
    int count = 0;

    while (*str) {
        if (mx_isalpha(*str))
            count++;
        str++;
    }
    return count;
}
