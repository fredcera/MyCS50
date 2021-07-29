#include <stdio.h>
#include <cs50.h>

int main(void)
{
    //Wait the user name
    string name = get_string("What's your name? ");
    
    //Greeting the user
    printf("hello, %s\n", name);
}