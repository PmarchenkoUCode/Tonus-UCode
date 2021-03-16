#include "baconian.h"

int main (int argc, char *argv[]) {
    if (argc == 2 && argv[1]) {
        char *input = argv[1];
        int length = mx_count_letters(argv[1]) / 5;
        char output[length+1], buff[6];
        output[length] = '\0';
        buff[5] = '\0';

        for (int i = 0; i < length; i++) {
            for (int j = 0; j < 5;) {
                if (mx_islower(*input))
                    buff[j++] = 'a';
                else if (mx_isupper(*input))
                    buff[j++] = 'b';
                input++;
            }
            output[i] = mx_decode_bacon(buff);
        }

        write(1, output, mx_strlen(output));
        write(1, "\n", 1);
        return 0;
    }
    write(2, "usage: ./baconian \"str\"\n", 25);
    return 0;
}
