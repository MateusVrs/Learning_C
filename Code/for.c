#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char name[50] = "";
    printf("Name: ");
    scanf("%s", &name);
    for (int letter = 1; letter <= strlen(name); letter++)
    {
        printf("%d\n", letter);
    }
    return 0;
}
