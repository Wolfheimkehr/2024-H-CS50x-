#include <stdio.h>

int sqr(int a);
void main(void)
{
    int n;
    printf("Size:");
    scanf("%i", &n);
    if (n > 0)
    {
        sqr(n);
    }
    else if (n <= 0)
    {
        while (n <= 0)
        {
            printf("Size:");
            scanf("%i", &n);
        }
        sqr(n);
    }
}

int sqr(int a)
{

    // print the wall
    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < a; j++)
        {
            printf("#");
        }
        printf("\n");
    }
}