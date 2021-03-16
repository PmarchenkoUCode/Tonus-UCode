#include "polybius.h"

char mx_decode_polibius(char *c) {
    int axis[2] = {0, 0};
    char poli[6][6] = {"abcdef", "ghijkl", "mnopqr", "stuvwx", "yz0123", "456789"};
    for (int i = 0; i < 2; i++) {
        if (c[i] == 'A' || c [i] == 'a')
            axis[i] = 0;
        else if (c[i] == 'B' || c [i] == 'b')
            axis[i] = 1;
        else if (c[i] == 'C' || c [i] == 'c')
            axis[i] = 2;
        else if (c[i] == 'D' || c [i] == 'd')
            axis[i] = 3;
        else if (c[i] == 'E' || c [i] == 'e')
            axis[i] = 4;
        else if (c[i] == 'F' || c [i] == 'f')
            axis[i] = 5;
    }
    return poli[axis[0]][axis[1]];
}
