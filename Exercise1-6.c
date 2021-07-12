#include <stdio.h>

/* verify that getchar() != EOF is 0 or 1 */
main()
{
	printf("%d\n", getchar() == EOF); /* 0 */
	printf("%d\n", getchar() != EOF); /* 1 */
}

