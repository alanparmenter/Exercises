#include <stdio.h>

/* Print histogram of uppercase character frequencies */
main()
{
	int c, i;
	int nchar[26];
	
	for (i = 0; i < 26; ++i)
		nchar[i] = 0;
		
	while ((c = getchar()) != EOF)
		if (c >= 'A' && c <= 'Z')
				++nchar[c - 'A'];
	
	putchar('\n');
	for (i = 0; i < 26; ++i) {
		while (nchar[i] >= 0) {
			if (nchar[i] == 0)
				putchar(' ');
			else
				putchar('|');
			nchar[i] = nchar[i] - 1;
		}
		putchar('\n');
	}
}
