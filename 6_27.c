#include <stdio.h>

void prog6_27() {
	int a, b;
	printf("a=");
	scanf_s("%d", &a);
	printf("b=");
	scanf_s("%d", &b);
	for (int i = 0; i < 8; i++) {
		bool a1 = (bool((1 << i) & a));
		bool b1 = (bool((1 << i) & b));
		if (a1 != b1) {
			printf("number is %d||", i);
		}
		else printf("same||");
	}
}