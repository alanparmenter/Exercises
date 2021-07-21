#include <stdio.h>

/* Print histogram of word lengths horizontally */
main()
{
	int b, c; /* previous, current characters */
	while ((c = getchar()) != EOF)
	if (c != ' ') {
		putchar('|');
		b = c;
	}
	else if (b != ' ') {
		putchar('\n');
		b = c;
	}
}
