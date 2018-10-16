/**
    * File:        : main.c
    * Information  : Simple Calculator in C.
    * Author       : Abdelrahman Mohamed
    * Date         : 2018-06-12
*/

//Includes Section
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//Declaration Section
int validateInteger(char inpt[5]);

//Global Defination Section


//Program Section
int main()
{

    //Print welcome message.
    printf("Welcome to Simple Calculator.\n");

    char num1[5], num2[5];
    char op, xt = 'n';

    while(xt != 'y'){

        if(xt == 'n'){

            printf("Please enter mathematical operation. Ex: 1 + 2 ?\n");
            scanf("%s %c %s",&num1,&op,&num2);

            //Validate inserted numbers
            if(!validateInteger(num1) || !validateInteger(num2)){
                //num1 or num2 is invalid.
                printf("Invalid entry, Only numbers are allowed.\n");

            } else if(op =='+') {
                //Sum
                printf("Result: %i\n", atoi(num1) + atoi(num2));

            } else if(op =='-') {
                //Subtract
                printf("Result: %i\n", atoi(num1) - atoi(num2));

            } else if(op =='/') {

                //Devide
                if(num2 == 0){
                    //Devision by zero error.
                    printf("Error: Devision by Zero.\n");

                } else {
                    printf("Result: %i\n", atoi(num1) / atoi(num2));
                }

            } else if(op =='*') {

                //Multiply
                printf("Result: %i\n", atoi(num1) * atoi(num2));

            } else {

                printf("Invalid operation, Only + , - , * , / available.\n");
            }

        }

        //Prompt for program exit.
        printf("Do you want to exit program ?\n");
        scanf("          %c",&xt);

        if(xt != 'y' && xt != 'n'){
            printf("Invalid selection, Please type y or n.\n");
        }

    }
    return 0;
}

int validateInteger(char inpt[5]){
    int i;
    for(i=0;i<strlen(inpt);i++){
        if(!isdigit(inpt[i])){
            return 0;
        }
    }
    return 1;
}


