#include <stdio.h>
#define NONBlank 'a'
int main() {
	int c, lastc;
	lastc = NONBlank;
	while ((c = getchar()) != EOF)
	{
		if (c != ' ' || lastc != ' ')
			putchar(c);
		lastc = c;
	}
	return 0;
}