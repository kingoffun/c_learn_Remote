#include <stdio.h>

#define MAXLINE 10 // max size of the input line

int getLine(char line[], int maxline);

// print the longest line
main()
{
    int len; // current line length
    char line[MAXLINE]; // current line
    int c;

    while ((len = getLine(line, MAXLINE)) > 0){
	if (len == MAXLINE){
	    printf("%s",line);
	    while ((c = getchar()) != EOF && c != '\n'){
		putchar(c);
	    }
	    putchar(c); // print \n
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