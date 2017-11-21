#include <stdio.h>

#define TRUE 	1
#define FALSE	0

main()
{
    int first; // bool flag for girst symbol in line
    int c,tc = -2;
    int sps_state, tb_state; // states for space and tab

    first = TRUE;
    sps_state = tb_state = FALSE;

    while ((c = getchar()) != EOF){
	if (first == TRUE){
	    if (c != '\n'){
		first = FALSE;
		if (c != '1' && c != '0')
		    putchar(c);
		else
		    tc = c;
	    }
	}
	else{
	    if (c == '1' || c == '0'){
	        if (tc == '1' || tc == '0')
		    putchar(tc);
		tc = c;
		continue;
	    }
	    
	    
	    if (c == '\n' && (tc == '1' || tc == '0')){
		    first = TRUE;
		    putchar(c);
	    }
	    else{
		if (tc > -2){
		    putchar(tc);
		    tc = -2;
		}
		putchar(c);
		//tc = c;
	    }
	}
    }
    
    return 0;
}