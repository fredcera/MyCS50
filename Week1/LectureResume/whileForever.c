#include <stdio.h>
#include <cs50.h>

void meow(void); //this is a prototype of an function that will be use before the implementation

int main(int)
{
    int count = get_int("Repeat how many times? ");

    //while implementation
    printf("While results: \n");
    int i = 0;
    while(i != count)
    {
        printf("hello, world!\n%i\n", i+1 );
        i++;
    }
    
    //for implementation
    printf("For results: \n");
    for(int j = 1; j <= count; j++)
    {
        printf("hello, world!\n%i\n", j);
        meow(2);
    }
}

void meow(int n)
{
    for(int i = 0; i < n; i++)
    {
        printf("meow\n");
    }
}