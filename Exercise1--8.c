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
		else if (c == '\t') /* tabs */
			++tb;
		else if (c == '\n') /* newlines */
			++nl;
	printf("\n"); printf("Blanks: "); printf("%d", bl);
	printf("\n"); printf("Tabs: "); printf("%d", tb);
	printf("\n"); printf("Newlines: "); printf("%d", nl);
	printf("\n");
}
