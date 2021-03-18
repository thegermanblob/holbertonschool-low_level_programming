#include <stdio.h>
/**
 * premain - pre main
 *
 *
 */
void __attribute__ ((constructor)) premain()
{
	printf("You're beat! and yet, you must %s",
			"allow,\nI bore my house upon my back!\n");
}
