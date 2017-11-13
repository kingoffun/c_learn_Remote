#include <stdio.h>

// count lines of  input stream

main()
{
    int c, nl, nt, nsp;
    nl = nt = nsp = 0;
    while ((c = getchar()) != EOF)
	if (c == '\n')
	    ++nl;
	else if (c == '\t')
	    ++nt;
	else if (c == ' ')
	    ++nsp;
    printf("lines - %d, tab - %d, spaces - %d\n", nl, nt, nsp);
}