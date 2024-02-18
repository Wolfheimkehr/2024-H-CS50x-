#include <stdio.h>

void main(void)
{
    int j = 0;
    while (j < 3)
    {
        for (int i = 0; i < 3; i++)
        {
            printf("#");
        }
        j++;
        printf("\n");
    }
}