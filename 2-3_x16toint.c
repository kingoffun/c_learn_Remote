#include <stdio.h>

// char short int long

int main()
{
    //for(i = 0; i < lim-1 && (c = getchar()) != EOF && c != '\n'; ++i)
    int i = 0, lim = 10, c;

    while(i < lim-1){
	if((c = getchar()) == EOF)
	    break;
	if(c == '\n'){
	    putchar(c);
	    break;
	}

	putchar(c);
	++i;
    }

    if((i == (lim-1)) && c != '\n')
	putchar('\n');

    return 0;
}