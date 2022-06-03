#include <stdio.h>
#include <math.h>
#include <malloc.h>

#define N 10
void prog9_7() {
	int a[N];
	int i;
	int c = 0;
	for (i = 0; i < N; i++) {
		printf("a[%d] = ", i);
		scanf_s("%d", &a[i]);
	}
	for (i = 0; i < N; i++) {
		printf("%d ", a[i]);
		int k = 31;
		while (k > 0) {
			if (pow(2, k) == a[i]) {
				c++;	
			}
			k--;
		}
		int l = 19;
		while (l > 0) {
			if (pow(3, l) == a[i]) {
				c++;
			}
			l--;
		}
	}
	printf("\n %d numbers", c);
}