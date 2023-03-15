#include <cs50.h>
#include <stdio.h>

int main(void)
{
    //Intiliazing height and loops variables
    int height, i, j;

    //Ask for height from the user
    do
    {
        height = get_int("Height: ");
    }
    while (height < 1 || height > 8);

    //loop from 1 to height to print each row of the pyramid.
    for (i = 1; i <= height; i++)
    {
        //Print the dots in the row
        for (j = height; j > i; j--)
        {
            printf(" ");
        }

        //Print the hashes in the row
        for (j = 1; j <= i; j++)
        {
            printf("#");
        }

        //Print the newline at the end of the row
        printf("\n");
    }
}