#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char const *argv[])
{
    if (strcmp(argv[1], "circle") == 0)
    {
        float x;
        int ptr = atoi(argv[2]);
        x = ptr * ptr * 3.14;
        printf("%f", x);
    }
    else if (strcmp(argv[1], "square") == 0)
    {
        int x;
        int ptr = atoi(argv[2]);
        x= ptr*ptr;
        printf("%d", x);
    }
    return 0;
}
