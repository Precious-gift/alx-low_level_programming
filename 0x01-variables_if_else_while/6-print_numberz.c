#include <stdio.h>
/**
 * Main - Printing all single digit numbers in base 10
 *
 * Return - always return 0
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
