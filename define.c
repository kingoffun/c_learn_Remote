#include <stdio.h>

// demonstrate how define work

#define LOWER 0 //botom table limit
#define UPPER 300 //upper table limit
#define STEP 20 //step value

main()
{
    int fahr;
    
    for (fahr = LOWER; fahr <= UPPER; fahr = fahr + STEP)
	printf ("%3d %6.1f\n", fahr, (5.0/9.0)*(fahr-32));
}

