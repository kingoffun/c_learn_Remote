#include <stdio.h>
#include <string.h>

#define MAX 10

void escape(char s[], char t[]);
void reescape(char s[], char t[]);
void clrline(char line[]);

int main(){

    //char toFind[] = "abc123";
    char line[MAX];
    char escline[MAX];

    int i, c;

    while((c = getchar()) != EOF){
	for(i = 0;i < MAX-2 && c != EOF && c != '\n';i++){
	    line[i] = c;
	    c = getchar();
	}

    line[i++] = '\n';
    line[i] = '\0';

    escape(escline,line);
    printf("%s\n",escline);

    clrline(line);
    clrline(escline);

    printf("%s\n",line);
    printf("%s\n",escline);

    }
    return 0;
}

void escape(char s[], char t[]){

    int i;
    
    for(i = 0;i < strlen(t);i++){
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
    }
}

void clrline(char line[]){
    int i;

    for(i = 0;i < strlen(line);i++){
	line[i] = 0;
    }
}