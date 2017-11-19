#include <stdio.h>

#define TRUE 	1
#define FALSE	0

int getLine(char line[], int maxline);
void copy(char to[], char from[]);

// print the longest line
main()
{
    int first; // bool flag for girst symbol in line
    int c;
    int sps_state, tb_state; // states for space and tab
    int in;

    first = TRUE;
    sps_state = tb_state = in = FALSE;

    while ((c = getchar()) != EOF){
	if (c != ' ' && c != '\t' && c != '\n'){
	    if (in == FALSE){
		if (first == TRUE)
		    first = FALSE;
		in = TRUE;
	    }
	    putchar(c);
	}
	else{
	    if (in == TRUE){
		putchar(c);
		in = FALSE;
		if (c == '\n')
		    first = TRUE;
	    }
	    else if (first == TRUE && c != '\n'){
		putchar(c);
	    }
	    else if (first == FALSE && c == '\n')
		putchar(c);
	}
	
	//if (c == ' ' && sps_state == FALSE)
	//    sps_state = TRUE;

	//if (c == '\t' && tb_state == FALSE)
	//    tb_state = TRUE;
	
	if (first == TRUE){ // 
	    if (c != '\n'){
		putchar(c);
		first = FALSE;
	    }
	}
	else{
	    if (c != '\n')
		putchar(c);
	    else{
		putchar(c);
		first = TRUE;
	    }
	    
	}
	
    }

    return 0;
}

// getline: read line into s, return length
int getLine(char s[], int lim)
{
    int c, i;
    
    for (i = 0; i < lim && (c = getchar()) != EOF && c != '\n'; ++i)
	s[i] = c;

    return i;
}

// copy: copy from 'from' into 'to'; to is large enough
void copy(char to[], char from[])
{
    int i;

    i = 0;

    while((to[i] = from[i]) != '\0')
	++i;

}