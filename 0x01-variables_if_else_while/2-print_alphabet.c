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
var char;
for (char = 97; char <= 122; char++)
{
putchar(char);
}
putchar(0);
return (0);

}
