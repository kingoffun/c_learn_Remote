#include <stdio.h>

#define MAXLINE 10	// max size of the input line
#define SPACES 1	// numb of spaces to change tabs

int main()
{
    int c,i;

    while ((c = getchar()) != EOF){
	
	if (c == '\t'){
	    for(i = 0; i < SPACES; ++i)
		putchar(' ');
	}
	else
	    putchar(c);
    }
    return 0;
}
