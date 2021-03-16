#include "polybius.h"

int main (int argc, char *argv[]) {
    if (argc == 2 && argv[1]) {
        char *input = argv[1];
        int length = 0;

        while (*input) {
            if (mx_isalpha(*input) && mx_isalpha(*(input + 1)))
                input++;
            length++;
            input++;
        }
        
        char *output = mx_strnew(length);
        input = argv[1];
        
        mx_input(input, output, length);

        write(1, output, mx_strlen(output));
        write(1, "\n", 1);

        return 0;
    }
    write(2, "usage: ./polibius \"str\"\n", 25);
    exit(0);
    return 0;
}
