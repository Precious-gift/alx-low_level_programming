#include <stdio.h>
/**
* main - Print all single digit numbers using only putchar
*
* Return: Always 0 (Success)
*/

int main(void)
{
  int ch;

  for (ch = 0; ch < 10; ch++)
    {
      putchar(ch + '0');
  }
  putchar('\n');
  return 0;
}
