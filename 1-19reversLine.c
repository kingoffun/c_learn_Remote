#include <stdio.h>

#define MAXLINE 10 // max size of the input line

void getLine();

char line[MAXLINE];

main()
{
    int c;

    while((c = getchar()) != EOF){
	getLine();
    }
	
    printf("%s...\n", longest);

    return 0;
}

// getline: read line into s, return length
void getLine()
{
    int c, i;
    
    for (i = 0; i < MAXLINE-1 && (c = getchar()) != EOF && c != '\n'; ++i)
	line[i] = c;

    if (c == '\n'){
	line[i] = c;
	++i;
    }
    
    line[i] = '\0';

    return i;
}
