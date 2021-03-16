#include "vigenere.h"

int main (int argc, char *argv[]) {
    if (argc == 3 && argv[1]) {
        int key[mx_strlen(argv[2])];
        int key_length = mx_strlen(argv[2]);
        int length = mx_strlen(argv[1]);

        for (int i = 0; i < key_length; i++) 
            key[i] = mx_keyshift(argv[2][i]);
        for (int i = 0, j = 0; i < length; i++) {
            argv[1][i] = mx_lettershift(argv[1][i], key[j%key_length]);
            if (mx_isalpha(argv[1][i]))
                j++;
        }
        write(1, argv[1], mx_strlen(argv[1]));
        write(1, "\n", 1);

        return 0;
    }
    write(2, "usage: ./caesar \"str\" \"key\"\n", 29);
    return 0;
}
