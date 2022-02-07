#include <stdio.h>
#define MAXLINE 4096  /* maximum input line size*/

int gitline(char line[], int maxline);
void copy(char to[], char from[]);

/* print longest input line */
main()
{
  int len;            /* current line length */
  int max;            /* maximum line length seen so far */
  char line[MAXLINE];       /* current input line */
  char longest[MAXLINE];    /* longest line saved here */

  max = 0;
  while ((len = gitline(line, MAXLINE)) > 0)
    if (len > max) {
      max = len;
      copy(longest, line);
    }
  if (max > 0)    /* there was a line */
    printf("%s\n", longest);
    printf("Length %d\n", max);
  return 0;
}

/* gitline: read a line into s, return length */
int gitline(char s[], int lim)
{
  int c, i;

  for (i=0; i<lim-1 && (c=getchar())!=EOF && c!='\n'; ++i)
    s[i] = c;
  if (c == '\n') {
    s[i] = c;
    ++i;
  }
  s[i] = '\0';
  return i;
}

/* copy: copy 'from' into 'to'; assume to is big enough */
void copy(char to[], char from[])
{
  int i;

  i = 0;
  while ((to[i] = from[i]) != '\0')
    ++i;
}
