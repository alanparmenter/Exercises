#include <stdio.h>

/* Copy input to output, replacing tab with \t, backspace with \b, and backslash with \\ */
main()
{
	int c;
	while ((c = getchar()) != EOF)
	if (c == '\t')
		printf("\\t"); /* \t */
	else if (c == '\b')
		printf("\\b"); /* \b */
	else if (c == '\\') /* \ */
		printf("\\\\"); /* \\ */
	else
		putchar(c);
}
