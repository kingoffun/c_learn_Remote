#include <stdio.h>

#define MAXLINE 10 // max size of the input line

int getLine(char line[], int maxline);
void copy(char to[], char from[]);

// print the longest line
main()
{
    int len; // current line length
    int max; // length of the max line from viewed one
    char line[MAXLINE]; // current line
    char longest[MAXLINE]; // the longest line
    int c;

    max = 0;

    //printf("%d 666\n", getLine(line, MAXLINE));

    while ((len = getLine(line, MAXLINE)) > 0){
	printf("%s\n",line);
	if (len > MAXLINE){
	    while ((c = getchar()) != EOF && c != '\n'){
		putchar(c);
	    }
	    putchar(c);
	    
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