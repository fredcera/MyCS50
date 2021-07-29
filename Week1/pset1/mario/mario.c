#include <stdio.h>
#include <cs50.h>

int main(void)
{
    //get the input from the user(integer: 1 to 8)
    int height = 0;
    do
    {
        height = get_int("Input the height of pyramid, like an integer from 1 to 8: ");
    }
    while ((height < 1) || (height > 8));
    
    // printf("%i\n",height);
    int ref = 0;
    for (int i = 0; i < height; i++)
    {
        // printf("pré I: %i\n", i);
        // printf("pré H: %i\n", height);
        // printf("pré Ref: %i\n\n", ref);
        // printf("============\n");
        
        int result1 = height - (ref + 1);
        // printf("%i\n", result1);
        
        for (int dot = 0; dot < result1; dot++)
        {
            printf(" ");
        }
        
        int reflect = 0;
        for (int j = 0; j < height; j++)
        {
            // printf("IN J: %i\n", j);
            // printf("IN H: %i\n", height);
            // printf("IN Ref: %i\n\n", ref);
            int result2 = height - (ref + 1);
            // printf("IN result of condition: %i\n\n", result);
            
            if (j >= result2)
            {
                printf("#");
                reflect++;
            }
            
        }
        
        //print the gap
        printf("  ");
        
        //print the otherside
        for (int end = 0; end < reflect; end++)
        {
            printf("#");
        }
        
        //jump the line
        printf("\n");
        ref++;
    }
    
}
