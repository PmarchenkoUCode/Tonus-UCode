#include "morse.h"

int main(int argc, char *argv[]) {
    if (argc == 2 && argv[1]) {
        char *alphabet[] = {"a", "b", "c", "d", "e", "f", "g", "h", "i", "j",
        "k", "l", "m", "n", "o", "p", "q", "r", "s", "t", "u", "v", "w",
        "x", "y", "z", "."," ", NULL };  
        char *morse[] = {".-", "-...", "-.-.", "-..", ".", "..-.", "--.",
        "....", "..", ".---", "-.-", ".-..", "--", "-.", "---", ".--.",
        "--.-", ".-.", "...", "-", "..-", "...-", ".--", "-..-","-.--",
        "--..", ".....", NULL };

        int len = 0;
        int slen = mx_strlen(argv[1]);

        while (morse[len] != NULL) {
            len++;
        }

        for (int i = 0; i < slen; i++) {
            if (_STR_[i] != ' ' && _STR_[i] != '-' && _STR_[i] != '.' && _STR_[i] != '\n') {
                mx_printerr("usage: ./morse \"str\"\n");
                return (0);
            }
        }

        for (int i = 0; i < mx_strlen(_STR_); i++) {
            if (_STR_[i] == _SPACE_ && _STR_[i + 1] == _SPACE_) {
                _STR_[i + 1] = '5';
            }
            if (_STR_[i] == '5' && _STR_[i + 1] == _SPACE_ && _STR_[i + 2] == _SPACE_) {
                _STR_[i + 1] = '5';
            }
            if (_STR_[i] == '\n') {
                _STR_[i] = ' ';
            }
        }
        char **arr = mx_strsplit(_STR_, _SPACE_);
        for (int i = 0; i < mx_count_words(_STR_, _SPACE_); i++) {
            for (int j = 0; j < len; j++) {
                if (mx_strcmp(arr[i], morse[j]) == 0) {
                    mx_printstr(alphabet[j]);
                }
            }
        }
        mx_printstr("\n");
    }
    else {
        mx_printerr("usage: ./morse \"str\"\n");
        return (0);
    }
    return (0);
}
