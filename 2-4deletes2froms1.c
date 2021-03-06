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
    for(i = 0;i < MAX-1 && c != EOF && c != '\n';i++){
	    line[i] = c;
	    c = getchar();
    }

    //printf("%d\n",i);

    if(i == MAX-1 && line[i-1] != '\n')
	line[i-1] = '\n';

    if(i < MAX-1){
		//printf("%d\n",i);
	line[i++] = '\n';

    }

    line[i] = '\0';

    //printf("%s\n",toFind);
    squeeze(line,toFind);
    printf("%s", line);
    clearLine(line);
    }
    return 0;
}

void squeeze(char s1[], char s2[])
{
    int i, j;
    //printf("%d\n",strlen(s2));
    for(i = 0; s1[i] != '\n';i++){
	for(j = strlen(s2)-1; j >= 0; j--)
	    //printf("j - %d", j/);
	    if(s1[i] == s2[j]){
		//printf("i - %c j - %c\n", s1[i], s2[j]);
		s1[i] = 0;
		break;
	    }
    }
}

void clearLine(char line[]){
    int i;
    for(i = strlen(line)-1; i >=0; i--)
	line[i] = 0;
}