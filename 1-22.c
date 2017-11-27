#include <stdio.h>

#define LINE 6	// numb of spaces to change tabs

int main()
{
    int i,c;

    i = 1;

    while((c = getchar()) != EOF){
	if(c == '\n' && i == 1)
	    continue;

	if(c == ' ')
	    c = '_';
	
	if(i % LINE == 0){
	    if(c != '\n')
		putchar(c);

	    putchar('\n');
	    ++i;
	}
	else{
	    putchar(c);
	    ++i;
	}

	if(c == '\n')
	    i = 1;
    }

    return 0;
}