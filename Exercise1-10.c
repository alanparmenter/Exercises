#include <stdio.h>

/* Copy input to output, replacing tab with \t, backspace with \b, and backslash with \\ */
main()
{
	int c;
	
	while ((c = getchar()) != EOF) {
		if (c == '\t') {
			putchar('\\');
			c = 't';
		}
		if (c == '\b') {
			putchar('\\');
			c = 'b';
		}
		if (c == '\\') {
			putchar('\\');
			c = '\\';
		}
	putchar(c);
	}
}
