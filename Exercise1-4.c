#include <stdio.h>

/* Print celsius fahrenheit conversion table */
main()
{
	int lower, upper, step;
	int celsius, fahrenheit;
	
	lower = -20;
	upper = 160;
	step = 20;
	
	celsius = lower;
	
	printf(" ºC\t  ºF\n");
	while (celsius <= upper) {
		fahrenheit = 9 * celsius / 5 + 32;
		printf("%3d\t%4d\n", celsius, fahrenheit);
		celsius = celsius + step;
	}
}
