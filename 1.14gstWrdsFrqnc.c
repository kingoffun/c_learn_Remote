#include <stdio.h>

//count numbs, separation and other symbols

main()
{
    int c, i, j, symbols[256];
    
    for (i = 0; i < 256; ++i)
	symbols[i] = 0;

    while ((c = getchar()) != EOF)
	++symbols[c];
    
    for (i = 0; i < 256; ++i)
	if (symbols[i] > 0){
	    if (i >= 32)
		printf("Symbol '%c' - ", i);
	    else
		printf("Code '%d' - ", i);
	
	    for(j = 0; j < symbols[i]; ++j)
		putchar('|');
	    putchar('\n');
	}
}