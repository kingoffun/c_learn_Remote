#include <stdio.h>

#define LINE 5

int htol(char hexa[LINE]);

int main()
{
    int c, i;
    char s[LINE];
    
    while((c = getchar()) != EOF){
	for(i = 0; i < LINE && (c = getchar()) != EOF && c != '\n';++i){
	    s[i]=c;
	}

	printf("line = %s, hex = %d\n", s, htol(s));
}

    return 0;
}

int htol(char s[])
{
    int i = 0;
    i = (int)s;
    return i;
}