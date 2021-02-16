#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 *
 *
 *
 *
 *
 */
int main(void)
{
	int win, pass;

	srand(time(0));
	win = 2772;
while (win >= 127)
{
  pass = ((rand() % 126) + 1);
  printf("%c", pass);
  win -= pass;
}
printf("%c", win);
return (0);
}
