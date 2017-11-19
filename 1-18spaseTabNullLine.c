#include <stdio.h>

#define TRUE 	1
#define FALSE	0

main()
{
    int first; // bool flag for girst symbol in line
    int c;
    int sps_state, tb_state; // states for space and tab

    first = TRUE;
    sps_state = tb_state = FALSE;

    while ((c = getchar()) != EOF){
	if (first == TRUE){
	    if (c != '\n'){
		
		first = FALSE;
		
		if (c == '\t')
		    tb_state = TRUE;
		else if (c == ' ')
			sps_state = TRUE;
		
		putchar(c);
	    }
	}
	else{
	    if (c == '\t'){
		if (tb_state == FALSE){
		    tb_state = TRUE;
		    putchar(c);
		    //printf("tab");
		}
	    }
	    else if (c == ' '){
		    if (sps_state == FALSE){
			sps_state = TRUE;
			putchar(c);
			//printf("sps");
		    }
	    }
	    else if (c == '\n'){
		    first = TRUE;
		    sps_state = tb_state = FALSE;
		    putchar(c);
		    //printf("nl");
	    }
	    else{
		sps_state = tb_state = FALSE;
		putchar(c);
		//printf("oth");
	    }
	}
    }
    
    return 0;
}