#include <stdio.h>
int main() {
	// count blanks,tabs,and newlines
	int  c, nblanks, ntabs, nnewlines;

	nblanks = 0;
	ntabs = 0;
	nnewlines = 0;
	while ((c = getchar()) != EOF)
	{
		if (c == ' ')
			++nblanks;
		if (c == '\t')
			++ntabs;
		if (c == '\n')
			++nnewlines;
	}
	printf("%d %d %d\n", nblanks, ntabs, nnewlines);
	return 0;
}