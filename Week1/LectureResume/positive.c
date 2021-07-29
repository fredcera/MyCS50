// Abstraction and scope

#include <cs50.h>
#include <stdio.h>

int get_positive_int(void); //prototype function

int main(void)
{
    int i = get_positive_int();
    printf("%i\n", i);
}

// Prompt user for positive integer
int get_positive_int(void) //return integer value n times
{
    int n; //if daclare this variable inside the braces, you can only use this inside the braces, thats why this is outside the 'do' braces
    do
    {
        n = get_int("Positive Integer: ");
    }
    while (n < 1); //this condition will ensures that the input only accept positive value, this repeat until positive value
    return n;
}
