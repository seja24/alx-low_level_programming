#include <stdio.h>
#include <ctype.h>
/**
 * main - prints all single digit numbers of base 10 starting from 0,followed by a new line
 *
 * Return :0(Success) 
 */
int main(void)
{
	int x;
	/*to print all single numbers of base 10,loop through them*/
	for (x = 0 ; x < 10 ; x++)
	printf("%d", x);
	printf("\n");
	return (0);
}
