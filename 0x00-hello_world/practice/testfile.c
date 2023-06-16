#include <stdio.h>
int main()
{
	int n1, n2, rem;
	printf("Kindly input two integers to be divided\n");
	scanf("%d %d", &n1, &n2);
	rem = n1 % n2;
	printf("The remainder when %d is divided by %d is %d\n", n1, n2, rem);
	return 0;
}
