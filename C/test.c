/**
 * Usage : ---------
 * 	gcc prog.c -std=c11
*/
#include<stdio.h>
#include "py.h"

int main(int argc, char *argv) {
	/**
	 * Test for and and or.
	 * Test successful.
	 * Tested for gcc compiler c11 version.
	*/
	if (1 == 1 and 1 == 2) 
		printf("This should not work\n");
	else if(1 == 1 or 1 == 2) 
		printf("This should work\n");
	else if (1 == 2) 
		printf("This should work\n");

	/**
	 *  Testing Generic Print Function.
	 * Test successful.
	 * Tested for gcc complier c11 version.
	*/

	println('a');    // prints "97" (on an ASCII system)
    println((char)'a');  // prints "a"
    println(123);    // prints "123"
    println(1.234);      // prints "1.234000"
	char *str = "abcdefghi";
	println(str); // prints "abcdefghi"

	/***
	 * Testing Generic Array Print  Function.
	 * aPrint ---------- arrayPrint
	 * Test successful.
	 * Tested for gcc complier c11 version.
	*/

	int arr[] = {1,2,3};
	aPrint(arr);

	float arr2[] = {1.2,2.3,3.4,6.54,1.25,1548.12};
	aPrint(arr2);


	return 0;
}
