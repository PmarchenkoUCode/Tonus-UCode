#include "baconian.h"

int mx_decode_bacon(char c[5]) {
    char letters[] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J','K', 'L', 'M', 
                        'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z', ' ', '.', ','};
    char bacon[29][5] = {"aaaaa", "aaaab", "aaaba", "aaabb", "aabaa", "aabab", "aabba", "aabbb", "abaaa", "abaab", 
                        "ababa", "ababb", "abbaa", "abbab", "abbba", "abbbb", "baaaa", "baaab", "baaba", "baabb", 
                        "babaa", "babab", "babba", "babbb", "bbaaa", "bbaab", "bbaba", "bbabb", "bbbaa"};

    for (int i = 0; i < 29; i++)
        if (mx_strncmp(c, bacon[i], 5) == 0)
            return letters[i];

    return 48;
}
