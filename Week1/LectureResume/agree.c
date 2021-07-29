#include <cs50.h>
#include <stdio.h>

int main(void)
{
    //agree question
    char c = get_char("Do you agree? ");
    
    //verification
    if (c == 'y' || c == 'Y')
    {
        printf("Agreed.\n");
    }
    else if (c == 'n' || c == 'N')
    {
        printf("Not agreed.\n");
    }
}