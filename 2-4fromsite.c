#include <stdio.h>
#include <string.h>

#define MAX 10

void squeeze(char s1[], char s2[]);
void clearLine(char line[]);

int main()
{
    char toFind[] = "abc123";
    char line[MAX];
    int i, c;

    while((c = getchar()) != EOF){
    for(i = 0;i < MAX-2 && c != EOF && c != '\n';i++){
	    line[i] = c;
	    c = getchar();
    }

    //printf("%d\n",i);

    if(i == MAX-1 && line[i-1] != '\n')
	line[i-1] = '\n';

//    if(i < MAX-1){
		//printf("%d\n",i);
//	line[i++] = '\n';

//    }

    line[i] = '\0';

    //printf("%s\n",toFind);
    squeeze(line,toFind);
    printf("%s", line);
    //clearLine(line);
    }
    return 0;
}

void squeeze(char s1[], char s2[])
{
    int i, j, k;

    for(k = 0; s2[k] != '\0';k++){
	for(i = j = 0; s1[i] != '\0'; i++)
	    if(s1[i] != s2[k])
		s1[j++] = s1[i];
    }
}

void clearLine(char line[]){
    int i;
    for(i = strlen(line)-1; i >=0; i--)
	line[i] = 0;
}