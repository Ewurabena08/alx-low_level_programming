#include <stdio.h>

void first(void) __attribute__ ((constructor));

/**
 * this script is a function that prints sentences
 * function is then executed
 * first - a sentence is printed before the main
 */
void first(void)
{
 printf("You're beat! and yet, you must allow,\n");
 printf("I bore my house upon my back!\n");
}
