#include <stdio.h>
/**
* main - Print all single digit numbers using only putchar
*
* Return: Always 0 (Success)
*/

int main(void)
{
int ch;

for (ch = 'z'; ch >= 'a'; ch--)
{
putchar(ch);
}
putchar('\n');

return (0);
}
