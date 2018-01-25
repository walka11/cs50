#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int height;
    do
    {
        printf("How tall is the mario pyramid? :");
        height = get_int();
    }
    while (height > 24 || height < 1);
    printf("Height: %d\n", height);
    for (int row = 0; row < height; row++)
    {
        for (int spaces = 0; spaces < height - row - 1; spaces++)
            printf(" ");
        for (int pound = 0; pound < row + 2; pound++)
            printf("#");
        printf("\n");
    }
}
