#include <stdio.h>

// copy input to output; v.1

main()
{
    int c, pop = 0;

    while ((c = getchar()) != EOF) {
	if (c == ' '){
	    if (pop == 0){
		putchar(c);
		pop = 1;
	    }
	}
	
	if (c != ' '){
	    putchar(c);
	    pop = 0;
	}
    }
}

