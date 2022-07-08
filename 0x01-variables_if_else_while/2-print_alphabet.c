#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
*main -entry point
*Return: always (0)
**/

int main(void)

{
int char;
for (char = 97; char <= 122; char++)
{
putchar(char);
}
putchar(0);
return (0);

}
