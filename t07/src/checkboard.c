#include "mxlib.h"

void mx_checkboard(const char **s) {
	int res;
	for (int i = 0; s[1][i]; ++i) {
		if (mx_isdigit(s[1][i])) {
			if (s[1][i] == s[3][0] || s[1][i] == s[4][0]) {
				res = (s[1][i] == s[3][0] ? 10 : 20) + s[1][i + 1] - 50;
				++i;
			} else {
				res = s[1][i] - 48;
				if (s[1][i] > s[3][0])
					--res; 
				if (s[1][i] > s[4][0])
					--res;
			}
			mx_printchar(s[2][res]);
		} else
			mx_printchar(s[1][i]);
	}
	mx_printchar('\n');
}

int main(int argc, char const **argv)
{
	if (argc != 5 || mx_strlen(argv[2]) != 28 || mx_strlen(argv[3]) != 1 ||
		mx_strlen(argv[4]) != 1 || !mx_isdigit(argv[3][0]) || !mx_isdigit(argv[4][0]))
		mx_printerr("usage: ./checkboard \"text\" \"alphabet\" \"num1\" \"num2\"\n");
	mx_checkboard(argv);
	return 0;
}
