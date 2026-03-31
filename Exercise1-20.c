#include <stdio.h>

#define TABWIDTH 4

main()
{
	int c, i, j;
	i = 0;
		while ((c=getchar()) != EOF) {	
			if (c == '\t')
				for (j = 0; j < (TABWIDTH - i % TABWIDTH); ++j)
					putchar(' ');
			else if (c == '\n') {
				i = 0;
				putchar(c);
			} else {
				putchar(c);
				i++;
			}
		}
	return 0;
}
