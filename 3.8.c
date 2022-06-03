#include <stdio.h>
#include <math.h>
#include <inttypes.h>
uint32_t sum(uint32_t a, uint32_t b) {
	if (a + b > 4294967295) {
		printf("sum is too big");
	}
	return (uint32_t)a + b;
}
uint32_t mult(uint32_t a, uint32_t b) {
	return (uint32_t)a * b;
}
int main() {
	unsigned a, b;
	scanf("%u", &a);
	scanf("%u", &b);
	printf("%u\n", sum(a, b));
	printf("%u\n", mult(a, b));
}