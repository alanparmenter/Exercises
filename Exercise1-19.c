#include <stdio.h>
#define MAXLINE 1000
#define MAXOUT 10000

void reverse(char to[], char from[], int len, int offset);

main()
{
    char s[MAXLINE];
    char r[MAXOUT];
    int i, c, len, offset;

    offset = 0;
    while ((len = getline(s, MAXLINE)) > 0) {
        reverse(r, s, len, offset);
        offset += len;
        r[offset++] = '\n';
    }
    printf("%s", r);
}

void reverse(char r[], char s[], int len, int offset) {
    int i;

    for (i = 0; i < len; i++) {
        r[offset + i] = s[len - i - 1];
    }
}

int getline(char s[], int lim)
{
    int c, i;

    for (i = 0; i < lim - 1 && (c = getchar()) != EOF && c != '\n'; ++i)
        s[i] = c;
    s[i] = '\0';
    return i;
}
