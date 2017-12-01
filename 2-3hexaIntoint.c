#include <stdio.h>

#define IN 1
#define OUT 0

int htol(char hexa[]);

int main()
{
    char s[4] = {'0','x','F','f'};
    printf("%d\n", htol(s));

    return 0;
}

int htol(char s[])
{
    int i = 0, number = 0, indigit = IN, hexdig;
    
    if(s[i] == '0'){
	i++;
	if(s[i] == 'x' || 'X')
	    i++;
    }

    for(;indigit == IN;i++){
	if(s[i] >= '0' && s[i] <= '9')
	    hexdig = s[i] - '0';
	else if(s[i] >= 'a' && s[i] <= 'f')
	    hexdig = s[i] - 'a' + 10;
	else if(s[i] >= 'A' && s[i] <= 'F')
	    hexdig = s[i] - 'A' + 10;
	else
	    indigit = OUT;

	if(indigit == IN)
	    number = number*16 + hexdig;
    }

    return number;
}