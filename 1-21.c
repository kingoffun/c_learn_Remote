#include <stdio.h>

#define MAX 10	// numb of symb in line
#define TAB 8	// numb of spaces to change tabs

void getLine();
int spcOnly(char line[]);
void freeLine();

char line[MAX];
int notMAX,c;

int main()
{
    int i;

    while ((c = getchar()) != EOF){
	
	getLine();
	//printf("%d\n",spcOnly(line));
	if(spcOnly(line) == (MAX-1)){
	    freeLine();
	    for(i=0;i<(MAX-1)/TAB;++i)
		line[i]='\t';
	//   printf("%d\n",(MAX-1)/TAB);
	    while(i <= (MAX-1-TAB))
		line[i++]='1';
	    
	    line[i] = '\n';
	}

	printf("%s",line);
    }


	
    return 0;
}

void getLine()
{
    int i;

    freeLine();

    for(i=0;i<MAX-1 && c != '\n';++i){
	line[i] = c;
	c = getchar();
    }

    line[i] = c;

    //printf("%s",line);

    if(i<MAX-2)
	notMAX = i;
}

int spcOnly(char s[])
{
    int i,state;
    
    state = 0;
    
    for(i=0;i<MAX-1;++i){
	if(s[i]=='1')
	    state++;
	else
	    return 0;
    }

    return state;
}

void freeLine()
{
    int i;

    for(i=0;i<MAX;++i)
	line[i] = 0;
}