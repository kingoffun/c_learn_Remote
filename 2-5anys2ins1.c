#include <stdio.h>
#include <string.h>

#define MAX 10

int any(char s1[], char s2[]);

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

    line[i++] = '\n';
    line[i] = '\0';

    
    printf("%d\n", any(line,toFind));

    }
    return 0;
}

int any(char s1[], char s2[])
{
    int i, j = 0, k;

    for(k = 0; s2[k] != '\0';k++){
	for(i = 0; s1[i] != '\0'; i++){
	    if(s1[i] == s2[k]){
		if(j>0 && i+1 < j){
		    j = i+1;
		}
		else if(j == 0)
		    j = i+1;
	    }
	}
    }
    
    if(j>0)
	return j;
    else
	return -1;
}
