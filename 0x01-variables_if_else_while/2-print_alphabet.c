#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
*main -entry point
*Return: always (0)
**/

int main(void)

{
int n;

srand(time(0));

n = rand() - RAND_MAX / 2;
for (int x = "A"; x <= "Z"; x++)
{
putchar(lower(x);
}
return (0);

}
