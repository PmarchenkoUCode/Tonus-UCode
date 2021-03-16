#include "polybius.h"

void mx_input(char *input, char *output, int length) {
    while (*input) {
        if (mx_isalpha(*input) && mx_isalpha(*(input + 1)))
            output[0] = mx_decode_polibius(input++);
        else if (!mx_isalpha(*input))
            output[0] = input[0]; 
        input++;
        output++;
    }
    output -= length;
}
