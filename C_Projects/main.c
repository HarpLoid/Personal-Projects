#include "string_man.h"


int main(void)
{
    char *str = "Hello all of you!";
    int len;

    len = _strlen(str);

    printf("%d\n", len);

    return (0);
}