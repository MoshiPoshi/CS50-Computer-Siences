#include <stdio.h>
#include<cs50.h>

int main(void)
{
    // declare name variable
    string name = get_string("What's your name? ");
    // Print hello-name in the output
    printf("hello, %s!\n", name);
}