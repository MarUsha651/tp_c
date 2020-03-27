#include <stdio.h>
#include <string.h>

char *function (char *a, char c)
{
	int i;
	char *n;
	for(i=0; i<strlen(a); i++)
		if (a[i]==c)
			{n=&a[i];
			break;}
	return n;

}

int main()
{
	char *s = NULL;
	int size = 0;
	char b;
	getline(&s,&size,stdin);
	puts(s);
	printf("c=\n");
	scanf ("%c", &b);
	printf("\n");
	printf("%p", function(s, b));
	return 0;
}