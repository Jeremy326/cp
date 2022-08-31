#include <stdio.h>
#include <string.h>
#define IN 1// inside a word
#define OUT 0//outside a word
//print input one word per line
int main()
{
	int c, state;
	state = OUT;
	while ((c = getchar()) != EOF) {
		if (c == ' ' || c == '\n' || c == '\t') {
			if (state == IN) {
				putchar('\n');//finish the word
				state = OUT;
			}
		}
		else if (state == OUT) {
			state = IN;//beginning of word
			putchar(c);
		}
		else {
			putchar(c);
		}
	}

	// ��s1<s2ʱ������Ϊ������
	//��s1 = s2ʱ������ֵ = 0��
	//��s1 > s2ʱ������������
	//int a = strcmp("1-1.cpp", "1-10.cpp");
	int a = strcmp("1-2.cpp", "1-10.cpp");
	printf("%d\n", a);
	return 0;
}