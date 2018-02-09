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
    while (height > 23 || height < 0);
    /*The code above ensures that an accepted value no greater then 23 is inputed*/

    for (int row = 0; row < height; row++)
    {
        for (int spaces = 0; spaces < height - row - 1; spaces++)
        {
            printf(" ");
        }
        /*The above code adds spaces to the front of the pyramid decending down to the height of the pyramid*/

        for (int pound = 0; pound < row + 2; pound++)
        {
            printf("#");
        }
        printf("\n");
        /*ensures that the remainder of the row is filed with pounds*/
    }
}
