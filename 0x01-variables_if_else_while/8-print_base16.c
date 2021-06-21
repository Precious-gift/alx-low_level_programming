#include <stdio.h>
/**
* main - Print all single digit numbers using only putchar
*
* Return: Always 0 (Success)
*/

int main(void)
{
int ch;
int cha;

for (ch = 0; ch < 10; ch++)
{
putchar(ch + '0');
}
for (cha = 'a'; cha < 'g'; cha++)
{
putchar(cha);
}

putchar('\n');

return (0);
}
