#include <stdio.h>

#define IN 1
#define OUT 0

//count numbs, separation and other symbols

main()
{
    int c, i, state, len;
    int ndigit[11];
    
    state = OUT;
    //len = 0;
    
    //for (i = 0; i < 11; ++i)
	//ndigit[i] = 0;
    

    while ((c = getchar()) != EOF)
	//
	if (c == ' ' || c == '\n' || c == '\t'){
	    if (state == IN)
		putchar('\n');
	    state = OUT;
	}
	else {
	    if (state == OUT)
		state = IN;
	putchar('|');
	}

}