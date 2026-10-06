#include <stdio.h>
#include <string.h> 
#include <stdlib.h> 
#include "vect.h"
#include <stdbool.h>
int main(int argc, char* argv[]){
 
    char user_input[20]; 
    /*char *token_one; 
    char *token_two; 
    char *token_three; 
    char *token_four; 
    char *token_five; */

    bool done = false; 
    while(!done){
        printf("minimat> "); 

        fgets(user_input, sizeof(user_input), stdin);
        //replaces \n with null terminator 
        user_input[strcspn(user_input, "\n")] = '\0';
        
        
        //if user enters quit, the loop breaks
        if(strcmp(user_input, "quit") == 0)
        {
            printf("Terminating....\n");
            done = true; 
        }
        //if user enters -h, come back to this later
        if(strcmp(user_input,"-h") == 0)
        {
            printf("This is a vector calculator that is like MATLAB with 3 components(x,y,z).\n"); 
            printf("Three operations are supported: add, sub, and scalar multiplication.\n"); 
        }

       /* token_one = strtok(user_input, " "); 
        token_two = strtok(NULL, " "); 
        token_three = strtok(NULL, " "); 
        token_four = strtok(NULL, " "); 
        token_five = strtok(NULL, " "); */



    }

    return 0; 

}