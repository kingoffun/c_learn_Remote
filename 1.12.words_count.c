#include <stdio.h>

// words count in the input stream

main()
{
    int c;
    //string word;
    
    while ((c = getchar()) != EOF){
	putchar(c);
	if (c == ' ' || c == '\t')
	    putchar('\n');
    }
}