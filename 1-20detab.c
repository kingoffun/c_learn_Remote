#include <stdio.h>

#define TAB 8	// numb of spaces to change tabs

int main()
{
    int c,i,symb,ntab;

    symb = 1;
    
    while ((c = getchar()) != EOF){
	
	if(c == '\t'){
	    ntab = TAB - (symb-1);
	    
	    for(i = 0; i < ntab; ++i)
		putchar('|');
	    
	    symb = 0;
	}
	else if(c == '\n'){
	    putchar(c);
	    symb = 0;
	}
	else
	    putchar(c);
	
	symb++;
	if(symb == TAB)
	    symb=0;
    }
    return 0;
}