#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char name[25] = "";
    printf("Name: ");
    fgets(name, sizeof(name) / sizeof(char), stdin);
    for (int letter = 1; letter <= strlen(name); letter++)
    {
        printf("%d ", letter);
    }
    return 0;
}
