#include <stdio.h>

int lower(int c);


int main(){

    int c;

    while((c = getchar()) != EOF)
	printf("%c", lower(c));

    return 1;
}

int lower(int c){
    
    return (c >= 65 && c <= 90) ? c+=32 : c;
}