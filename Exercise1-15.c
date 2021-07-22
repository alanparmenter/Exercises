#include <stdio.h>

/* Temperature conversion with function */
main()
{
	int fahr, celcius;
	int lower, upper, step;
	
	lower = 0;
	upper = 300;
	step = 20;
	
	fahr = lower;
	while (fahr <= upper) {
		celcius = tconv(fahr);
		printf("%d\t%d\n", fahr, celcius);
		fahr = fahr + step;
	}
}

int tconv(int fahr)
{
	return 5 * (fahr-32.0) / 9;
}
