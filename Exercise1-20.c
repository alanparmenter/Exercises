#include <stdio.h>

#define MAXLINE 80
#define TABWIDTH 4

main()
{
	int c, i, j;
	for (i = 0; i < MAXLINE-1
		&& (c=getchar()) != EOF && c != '\n'; ++i)
			if (c == '\t')
				for (j = 0; j < (TABWIDTH - i % TABWIDTH); ++j)
					printf("%c", ' ');
			else printf("%c", c);
	return 0;
}
