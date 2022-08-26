#include <stdio.h>
//1-6 1-7
int main() {
	//int c;
	//c = getchar();
	//while (c != EOF)
	//{
	//	putchar(c);
	//	c = getchar();
	//}
	int c;
	int result = (getchar() != EOF);
	printf("%d\n", result);
	/*
	while ((c = )getchar()) != EOF)_
	{
		if (getchar() != EOF)
			printf("getchar()!=EOF等于0");
		else if (c == 1)
			printf("getchar()!=EOF等于1");
		//printf("%d\n", c);

		putchar(c);
	}*/
	return 0;

	/*long nc;
	nc = 0;
	while (getchar() != EOF) {

		++nc;
		printf("%ld\n", nc);
	}*/
	//return 0;
}