#include <stdio.h>

int main() {
#if __STDC_VERSION__ >= 201710L
	printf("C18 is in use!\n");
#elif __STDC_VERSION__ >= 201112L
	printf("C11 is in use!\n");
#elif __STDC_VERSION__ >= 199901L
	print("C99 is in use!\n");
#else
	printf("C89/C90 is in use!\n");
#endif
	return 0;
}
