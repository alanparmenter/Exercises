#include <stdio.h> //p20

/* Write a program to copy its input to its output,
replacing each string of one or more blanks by a single blank */
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
