#include <stdio.h>

#define MAXLINE 10 // max size of the input line

void getLine();
void reversLine(char ln[]);
void freeLine();

char line[MAXLINE];
char rline[MAXLINE];
int c,notMAX;

main()
{
    while((c = getchar()) != EOF){
	getLine();
//	printf("%s", line);
	reversLine(line);
	printf("%s", rline);
//	putchar(rline[MAXLINE-1]);
	freeLine();
    }
	
    return 0;
}

void reversLine(char ln[])
{
    //char s[MAXLINE];
    int i,j;
    
    if(notMAX == 0){
    
	for (i = MAXLINE-2, j = 0; i >= 0; --i, ++j)
	    rline[j] = ln[i];
	
	rline[j] = ln[j];
    }
    else if(notMAX < MAXLINE-1) {
	for (i = notMAX-1, j = 0; i >= 0; --i, ++j)
	    rline[j] = ln[i];
	
	rline[j] = ln[j];
    }
}

// getline: read line into s, return length
void getLine()
{
    int i;
    
    for (i = 0; i < MAXLINE-1 && c != '\n'; ++i){
	line[i] = c;
	c = getchar();
    }
    line[i] = '\n';

    if (i < MAXLINE-1)
	notMAX = i;
    else if (i == MAXLINE-1)
	notMAX = 0;
}

void freeLine()
{
    int i;

    for (i = 0; i < MAXLINE; ++i)
	line[i] = 0;

    for (i = 0; i < MAXLINE; ++i)
	rline[i] = 0;
}