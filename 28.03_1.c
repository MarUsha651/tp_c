#include <stdio.h>

int function (char *a)
{	int i, n=0;
	for(i=0; i<10; i++)
		if (('0'<=a[i])&&(a[i]<='9'))
			n++;
		return n;
}
int main()
{
	char s[10];
	fgets(s,10,stdin);
	puts(s);
	printf("%d\n", function(s));
	return 0;
}