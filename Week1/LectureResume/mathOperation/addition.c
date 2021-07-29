#include <stdio.h>
#include <cs50.h>

int main(void)
{
    //the max value to input on a integer variable is 2147483648
   
    //inside the printf you can use like: 
    //%c - to a sigle char,  
    //%f - to a float number,  
    //%i - to integer,  
    //%li - to a long integer, 
    //%ld - to a long double,
    //%s - to a string
    
    //input to value x
    long x = get_long("x: ");
    //input to value y
    long y = get_long("y; ");
    //return the addition x + y
    printf("%li\n", x + y);
    
}