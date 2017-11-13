#include <stdio.h>

// Fahrenheit and Celsius temperature table printing
// for fahr = 0, 20, ..., 300


main()
{
    float fahr, cels;
    int lower, upper, step;

    lower = 0; // lower limit of the temperature table
    upper = 300; // upper limit
    step = 20; // step

    cels = lower;

    printf("Celsius Fahrenheit\n");

    while (cels <= upper) {
	fahr = 32.0 + 1.8*cels;
	printf ("%7.0f %10.1f\n", cels, fahr);
	cels = cels + step;
    }
}