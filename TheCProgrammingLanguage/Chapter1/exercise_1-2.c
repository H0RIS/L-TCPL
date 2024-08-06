#include <stdio.h>

void main()
{
    printf("hello, world\h"); // escaping a character that is not part of the escape sequences results in a compilation warning
}

/*
h0@H0RIS:~/dev/c/tcplknr/ch1$ cc exercise_2.c -o exercise_2
exercise_2.c: In function ‘main’:
exercise_2.c:5:28: warning: unknown escape sequence: '\h'
    5 |     printf("hello, world\h");
      |
*/