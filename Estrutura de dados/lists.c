#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char list[] = "Mateus";
    for (int i = strlen(list); i >= 0; i--)
    {
        printf("%c", list[i]);
    }
    return 0;
}
