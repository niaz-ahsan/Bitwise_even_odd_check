/*
 ============================================================================
 Name        : Bitwise_even_odd_test.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>

int main(void) {
	int32_t a;
	printf("Enter number to be checked: ");
	scanf("%d", &a);

	if(a & 1) {
		// testing the LSB by bit-masking
		printf("You've entered odd number!\n");
	} else {
		printf("You've entered even number!\n");
	}

	return 0;
}
