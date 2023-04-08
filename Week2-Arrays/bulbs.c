#include <cs50.h>
#include <stdio.h>
#include <string.h>

const int BITS_IN_BYTE = 8;

void print_bulb(int bit);

int main(void)
{
    // Get user input
    string message = get_string("Enter a message: ");

    // Convert message to binary
    int len = strlen(message);
    for (int i = 0; i < len; i++)
    {
        char c = message[i];
        for (int j = BITS_IN_BYTE - 1; j >= 0; j--)
        {
            int bit = (c >> j) & 1;
            print_bulb(bit);
        }
        printf("\n");
    }
}

void print_bulb(int bit)
{
    if (bit == 0)
    {
        // Dark emoji
        printf("\U000026AB");
    }
    else if (bit == 1)
    {
        // Light emoji
        printf("\U0001F7E1");
    }
}
