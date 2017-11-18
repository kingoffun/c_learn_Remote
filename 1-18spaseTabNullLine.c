#include <stdio.h>

#define true 	1
#define false	0
//#define MAXLINE 10 // max size of the input line

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

    while ((c = getchar()) != EOF)

    while ((len = getLine(line, MAXLINE)) > 0){
	//printf("%s",line);
	if (len == MAXLINE){
	    printf("%s",line);
	    while ((c = getchar()) != EOF && c != '\n'){
		putchar(c);
	    }
	    putchar(c); // show \n
	    
	}
	}

    return 0;
}

int isNullLine(char s[]){
    char c;
    int i;
    int first;

    first = false;
    
    while (true)
    
    return true;
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