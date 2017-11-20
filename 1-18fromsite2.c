#include <stdio.h>

#define TRUE 	1
#define FALSE	0

main()
{
    int first; // bool flag for girst symbol in line
    int c,tc;
    int sps_state, tb_state; // states for space and tab

    first = TRUE;
    sps_state = tb_state = FALSE;

    while ((c = getchar()) != EOF){
	if (first == TRUE){
	    if (c != '\n'){
		first = FALSE;
		if (c != ' ' && c != '\t')
		    putchar(c);
		else
		    tc = c;
	    }
	}
	else{
	    if (c == ' ' || c == '\t'){
	        tc = c;
		continue;
	    }
	    
	    
	    if (c == '\n' && (tc == ' ' || tc == '\t')){
		    first = TRUE;
		    putchar(c);
	    }
	    else{
		putchar(tc);
		putchar(c);
		tc = c;
	    }
	}
    }
    
    return 0;
}