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

    while ((len = getLine(line, MAXLINE)) > 0){
	
	if (line[len-1] != '\n')
	    while ((c = getchar()) != EOF && c !='\n')
		++len;
	
	if (len > max){
	    max = len;
	    copy(longest, line);
	}
    }
    
    if (max < MAXLINE) // subtract null-symbol inserted in getLine
	--max;
    
    if (max > 0){ // if there was at least one line
	if(max > MAXLINE)
	    printf("%s...\n", longest);
	else
	    printf("%s\n", longest);
    }
    printf("string length - %d symbol\n",max);

    return 0;
}

// getline: read line into s, return length
int getLine(char s[], int lim)
{
    int c, i;
    
    for (i = 0; i < lim-1 && (c = getchar()) != EOF && c != '\n'; ++i)
	s[i] = c;

    if (c == '\n'){
	s[i] = c;
	++i;
    }
    
    s[i] = '\0';

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