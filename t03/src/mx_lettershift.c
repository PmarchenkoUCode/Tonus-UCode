#include "vigenere.h"

char mx_lettershift (char c, int shift) {
    if (mx_islower(c)) {
        if (c + shift > 122)
            c = 96 + ((c + shift) - 122);
        else if (c + shift < 97)
            c = 123 - (97 - (c + shift));
        else
            c += shift;
    }
    else if (mx_isupper(c)) {
        if (c + shift > 90)
            c = 64 + ((c + shift) - 90);
        else if ((c + shift) < 65)
            c = 91 - (65 - (c + shift));
        else
            c += shift;
    }
    return c;
}
