#include <stdio.h>
#include <stdlib.h>

void *malloc_checked(unsigned int b);

int main(void)
{
    char *s = malloc_checked(10);

    s[0] = 'H'; s[1] = 'i'; s[2] = '\0';
    printf("%s\n", s);
    free(s);
    return (0);
}