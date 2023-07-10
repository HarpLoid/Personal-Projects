#include "string_man.h"

int _strlen(char *str)
{
    int i;
    
    for (i = 0; str[i]; i++)
        ;
    return (i);
}

int is_delimiter(const char *delim)
{
}

/*int *line_length()*/