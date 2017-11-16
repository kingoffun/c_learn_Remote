#include <stdio.h>
int fahrToCelc(int far);

main()
{
    int fahr, celsius;
    int lower, upper, step;

    lower = 0; // lower limit of the temperature table
    upper = 300; // upper limit
    step = 20; // step

    fahr = lower;
    while (fahr <= upper) {
	//celsius = 5 * (fahr-32) / 9;
	printf ("%3d\t%6d\n", fahr, fahrToCelc(fahr));
	fahr = fahr + step;
    }
    
    return 0;
}

int fahrToCelc(int far)
{
    int res;
    res = 5 * (far - 32) / 9;
    return res;
}