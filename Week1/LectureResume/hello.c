#include <stdio.h> // standart input output
#include <cs50.h> //lib that contains get_string, get_float, get_char, get_string... for exemple
//lib will give to you more access to other functions

//if you use *help50* before the comand make <new_file> you will get a help to know what is wrong with your code, the command is: help50 make hello
//if you use *style50*, this will check your code style and tells you some tips to make it looks better, the command is: style50 hello.c
//if you use *check50*, will check the correctness of your code, the command is: check50 -l cs50/problems/hello ( -l make it run locally)

//COMMANDS THAT ARE USE FOR CONTROL FILES AND DIRECTORIES
//to move file use: mv <file_name> <location>/  ==>  mv hello.c lecture/
//to make a directory use: mkdir <directory_name>/  ==>  mkdir lecture/
//to remove a file use: rm <file_name>  ==>  rm hello
//to change directory use: cd <directory>/  ==>  cd lecture/
//to list files use: ls
//to move a file to parent directory (lvl up) use: mv <file_name> ..  ==>> mv hello.c ..
//to remove a directory use: rmdir <directory>/  ==>  rmdir lecture/
//to reference the current directory use: .  ==> ./hello

//TO RECOMPILE you need to put in the console the command 'make <new_file>'

//inside the printf you can use like: %c - to a sigle char,  %f - to a float number,  %i - to integer,  %li - to a long integer,  %s - to a string

//to casting a variable use like: (float) variable_name ==> (float) x

//an ternary function looks like: age < 18 ? "menor" : "major" 

//the operators are like +,-,*,/ and %

//semi colums is not use in the end of new funtions or loops

// this (int main(void)) was like 'when green flag clicked'
int main(void)
{

    printf("hello, world");

    string name = get_string("\nWhat's your name? ");

    // %s is a place holder to put some 's'tring before that place
    // \n is a scape caracter to move the cursor to the next line
    printf("Hello, %s\n", name);

}