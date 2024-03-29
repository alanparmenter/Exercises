#include <stdio.h>
#define MAXLINE 4096  /* maximum input line size*/
#define MINLINE 1    /* minimum size to print line*/

int gitline(char line[], int maxline);
void copy(char to[], char from[]);

/* print longest input line */
main()
{
  int len;                 /* current line length */
  int output;              /* if any lines longer than MINLINE */
  char line[MAXLINE];      /* current input line */
  char longlines[MAXLINE]; /* lines longer than MINLINE */
  char linesout[MAXLINE];  /* lines excepting trailing spaces and tabs */
  int i;                   /* for loop index */
  char c;                  /* for loop character*/
  int j;                   /* last acceptable character index */

  output = 0;
  while ((len = gitline(line, MAXLINE)) > 0)
    if (len > MINLINE) {
      copy(longlines, line);
      for (i=0; i<len; i++) {
        if ((c = longlines[i]) != ' ' && c != '\t' && c != '\n' && c != EOF) {
          j = i;
        }
      }
      for (i=0; i<j; i++) {
        linesout[i] = longlines[i]
      }
      output = 1;
    }
    if (output == 1)

      printf("%d", j+1);
  return 0;
}

/* gitline: read a line into s, return length */
int gitline(char s[], int lim)
{
  int c = 0, i;

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

