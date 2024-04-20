#include<stdio.h>

int add(int a, int b){return a+b;}

int main(void) {
	printf("%p\n", main);
	printf("%p\n", add);
	while(1) {}
	return 0;
}
