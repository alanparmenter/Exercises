#include <stdio.h>

#define IN  1	/* inside a word */
#define OUT 0	/* outside a word */

/* Print input one word per line */
main()
{
	int b, c, state; /* previous b, current c */
	b = 0;
	state = OUT;
	while ((c = getchar()) != EOF) {
		if (c == ' ' || c == '\n' || c == '\t') {
			if (b == ' ' || b == '\n' || b == '\t')
				b = c;
			else {
			state = OUT;
			printf("\n");
			b = c;
			}
		}
		else if (state == OUT) {			
			putchar(c);
			b = c;
		}
	}
}
