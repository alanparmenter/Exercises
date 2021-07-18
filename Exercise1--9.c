#include <stdio.h>

/* Copy input to output, replacing multiple blanks with a single blank */
main()
{
	int b, c; /* previous character, current character */
	while ((c = getchar()) != EOF)
	if (c == ' ') {
		if (b == ' ')
			b = c;
		else {
		putchar(c);
		b = c;
		}
	}
	else {
		putchar(c);
		b = c;
	}
}
