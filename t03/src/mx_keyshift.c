#include "vigenere.h"

int mx_keyshift(char c) {
    if (mx_islower(c))
        return - 1 * (c - 97);
    else if (mx_isupper(c))
        return - 1 * (c - 65);
    return 0;
}
