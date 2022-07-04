#include <stdlib.h>
#include <time.h>
#include <stdio.h>


/**
*main- entry point
*Return: always (0)
*/

int main(void)
{
int n;
srand(time(0));
n = rand() - RAND_MAX / 2;
if (n > 0)
printf("%d Is positive\n", n);
if (n == 0)
printf("%d Is zero\n", n);
if (n < 0)
{
printf("%d Is negative\n", n);
}
return (0);
}
