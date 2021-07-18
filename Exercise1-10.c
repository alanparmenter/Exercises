#include <stdio.h> //p20

/* Write a program to copy its input to its output,
replacing each tab by \t, each backspace by \b, and
each backslash by \\ */
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
