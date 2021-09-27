/*
ahmad einieh
all rights reserved
*/
#include <stdio.h>
#define MAXLEN 1000

int main()
{
  char ch, src[MAXLEN], dst[MAXLEN], tt;
  int i, j;

  i = j = 0;
  printf("Please enter a sentence:\n");
  gets(src);

  while ((ch = src[i++]) != '\0')
  {
    tt = src[i];
    if (ch == ' ' && (tt >= '0' && tt <= '9'))
    {
      dst[j++] = ' ';
      dst[j++] = '<';
      dst[j++] = 'b';
      dst[j++] = 'r';
      dst[j++] = '>';
    }
    else if ((ch >= '0' && ch <= '9') && (tt == ' ' || tt == '\0'))
    {
      dst[j++] = ch;
      dst[j++] = '<';
      dst[j++] = '/';
      dst[j++] = 'b';
      dst[j++] = 'r';
      dst[j++] = '>';
    }
    else
    {
      dst[j++] = ch;
    }
  }

  dst[j++] = '\0';
  printf("\n%s\n", dst);

  return 0;
}
/*all rights reserved*/
