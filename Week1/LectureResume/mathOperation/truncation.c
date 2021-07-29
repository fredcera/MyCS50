#include <cs50.h>
#include <stdio.h>

int main(void)
{
    //input for x and y
    int x = get_int("x: ");
    int y = get_int("y: ");
    
    //divide x by y 
    //to casting a variable use like: (float) variable_name ==> (float) x
    
    float z = (float) x / (float) y; //if you use integer to x and y the result will be and integer value and that's causes an math
    
    printf("%f\n", z);
}