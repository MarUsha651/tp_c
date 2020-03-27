#include <stdio.h>
#include <string.h>

int main ()
{
	char str [6];
	int i, str_n, number=0;
	fgets(str,6,stdin);
	puts(str);
	for (i=0; i<5; i++)
		{str_n= (int)str[i]-(int)'0';
		number=number*10+str_n;
		}
	printf("number=%d\n", number);
	return 0;

}