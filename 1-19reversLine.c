#include <stdio.h>

#define MAXLINE 10 // max size of the input line

void getLine();
void reversLine(char ln[]);

char line[MAXLINE];
char rline[MAXLINE];

main()
{
    int c;

    while((c = getchar()) != EOF){
	getLine();
	reversLine(line);
	printf("%s\n", rline);
    }
	
    return 0;
}

void reversLine(char ln[])
{
    //char s[MAXLINE];
    int i,j;
    
    if(ln[MAXLINE-2] == '\n'){
    
	for (i = MAXLINE-3, j = 0; i >= 0; --i, ++j)
	    rline[j] = ln[i];
	
	rline[j] = ln[j];
	++j;
	rline[j] = ln[j];
    }
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
}
