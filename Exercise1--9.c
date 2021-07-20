#include <stdio.h>

/* Copy input to output, replacing multiple blanks with a single blank */
main()
{
	int b, c; /* previous, current characters */
	while ((c = getchar()) != EOF) {
		if (c != ' ') {
			putchar(c);
			b = c;
		}
		if (c == ' ')
			if (b != ' ') {
				putchar(c);
				b = c;
			}
	}
}
