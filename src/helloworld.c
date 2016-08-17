/*
 ============================================================================
 Name        : helloworld.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

struct person{
   char *name;
   int age;
};

int main(void) {
	struct person zhang;
	zhang.name="zhangshan";
	puts(zhang.name);
	printf("%x\r\n",&zhang);
	puts("!!!Hello World!!!"); /* prints !!!Hello World!!! */
	return EXIT_SUCCESS;
}

