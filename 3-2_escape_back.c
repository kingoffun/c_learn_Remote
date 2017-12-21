#include <stdio.h>
#include <string.h>

#define MAX 10

void escape(char s[], char t[]);
void reescape(char s[], char t[]);
void clrline(char line[]);

int main(){

    char line[MAX];
    char escline[MAX];
    memset(line, 0, sizeof(line));
    memset(escline, 0, sizeof(escline));	

    int i=0	, c;

    while((c = getchar()) != EOF){
	if ( c == '\n' ) {
	    line[i] = 0;
	    i = 0;
	    memset(escline, 0, sizeof(escline));
	    escape(escline, line);
	    printf("escaped = %s\n", escline);
	} else {
	    line[i++] = c;
        }
    }
    return 0;
}

void escape(char s[], char t[]){

    int i, j;

    for(i = 0, j=0;t[i] != '\0';i++){
	switch(t[i]){
	case '\t':
	    s[i++] = '\\';
	    s[i] = 't';
	    break;
	case '\n':
	    s[i++] = '\\';
	    s[i] = 'n';
	    break;
	default:
	    s[i] = t[i];
	    break;
	}
    //printf("s = %s\n",s);
    }
        s[i] = '\0';
}

void clrline(char line[]){
    int i;

    for(i = 0;i < strlen(line);i++){
	line[i] = 0;
    }
}