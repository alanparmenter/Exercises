#include <stdio.h>

/* Count blanks, tabs and newlines */
main()
{
	int c, bl, tb, nl;
	
	bl = 0; //blanks
	tb = 0; //tabs
	nl = 0; //newlines

	while ((c = getchar()) != EOF)
		if (c == ' ') /* blanks */
			++bl;
		if (c == '\t') /* tabs */
			++tb;
		if (c == '\n') /* newlines */
			++nl;
	printf("%2d %d %d ", bl, tb, nl);
}
