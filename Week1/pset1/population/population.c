#include <cs50.h>
#include <stdio.h>

int main(void)
{
    // TODO: Prompt for start size
    int startSize = 0;
    do
    {
        startSize = get_int("What's the start size of Llamas population? ");
    }
    while (startSize < 9); //the ssize can't be less than 9
    
    //this is to save the start value to calculate the population grow
    float llamasSize = startSize;
    
    // TODO: Prompt for end size
    int endSize = 0;
    do
    {
        endSize = get_int("What's the end size of Llamas population? ");
    }
    while (endSize < startSize);
    
    // TODO: Calculate number of years until we reach threshold
    int years = 0;
    int llamasActual = 0;
    if (llamasSize != endSize)
    {
        do
        {
            // printf("pré LlamasSize size is: %f\n", llamasSize);
            // printf("pré LlamasActual size is: %i\n", llamasActual);
            
            int born = llamasSize / 3;
            int dead = llamasSize / 4;
            
            // printf("Real born: %f\n", (llamasSize / 3));
            // printf("born: %i\n", born);
            // printf("Real dead: %f\n", (llamasSize / 4));
            // printf("dead: %i\n", dead);
            
            llamasActual = (llamasSize + born - dead);
            // printf("pós LlamasSize size is: %f\n", llamasSize);
            // printf("pós LlamasActual size is: %i\n", llamasActual);
            llamasSize = llamasActual;
            years++;
            // printf("LlamasActual size is: %i\n", llamasActual);
            // printf("final LlamasSize size is: %f\n", llamasSize);
            // printf("Actual year is: %i\n", years);
        }
        while (llamasSize < endSize);
        
        //printf("The number of years to get de end population is: %i\n", years);
    }
    // else
    // {
    //     printf("The number of years to get de end population is: %i\n", years);
    // }
    
    // TODO: Print number of years
    
    printf("Years: %i\n", years);
    
}
