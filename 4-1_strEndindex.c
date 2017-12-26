#include <stdio.h>

#define MAX 10

int strindex(char line[], char subline[]);

int main(
	)
{
	int i,c;
	char line[MAX];
	char t[] = "abc";

	while((c = getchar()) != EOF){
		for (i = 0; i < MAX-2 && c != EOF && c != '\n'; i++)
		{
			line[i] = c;
			c = getchar();
		}

		line[i++] = '\n';
		line[i] = '\0';

		// printf("%s\n", t);

		printf("right index = %d\n",strindex(line,t));

	}

	return 0;
}

int strindex(char s[], char t[])
{
	int i,j,k;

	for (i = 0; s[i] != '\0'; i++){
		for (j = i, k = 0; t[k] != '\0' && t[k] == s[j]; k++, j++)
			;


		if(k > 0 && t[k] == '\0')
		return j;	
	}

	return -1;
}