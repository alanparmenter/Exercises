#include <stdio.h>
#define MAXLINE 1000    /* maximum input line size */
#define MAXOUT 10000    /* maximum output array size */
#define MINLINE 1      /* minimum line length for output */

int getline(char line[], int maxline);
void copy(char to[], char from[], int size);
int trunclen(char line[]);

/* print longest line input */
main()
{
    int len;                 /* line length from getline */
    int trailend;            /* number of non-trailing characters */
    int offset;              /* cumulative index for insertion */
    char line[MAXLINE];      /* current line from input */
    char output[MAXOUT];     /* output for lines at end */

    offset = trailend = 0;
    while ((len = getline(line, MAXLINE)) > 0)
        if (len > MINLINE) {
            trailend = trunclen(line);
            if (trailend > 0) {
                copy(output, line, offset);
                offset += trailend;
                output[offset++] = '\n';
            }
            trailend = 0;
        }
    output[offset++] = '\0';
    printf("%s", output);
    return 0;
}

/* getline: read a line into s, return length */
int getline(char s[], int lim)
{
    int c, i;
    for (i = 0; i < lim-1 && (c = getchar()) != EOF && c != '\n'; ++i)
        s[i] = c;
    if (c == '\n') {
        s[i] = c;
        ++i;
    }
    s[i] = '\0';
    return i;
}

/* trunclen: return length without trailing whitespace */
int trunclen(char line[])
{
    int i, c, j;
    j = 0;
    for (i = 0; (c = line[i]) != '\0' && c != EOF; ++i)
        if (c != ' ' && c != '\t' && c != '\n')
            j = i + 1;
    return j;
}


/* copy 'from' into 'to' */
void copy(char to[], char from[], int j)
{
    int i;
    for (i = 0; (to[j + i] = from[i]) != '\0'; ++i)
        ;
}
