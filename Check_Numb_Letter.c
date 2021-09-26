/*
* Name: Alain Sfeir
* Date: 9/24/2021
* Question number: problem2 
* Description: 
Write a program to take input from the user and then check whether it is a number or a 
character. If it is a character, determine whether it is in upper case or lower case. Also, print its ASCII 
value.  
*/
#include <stdio.h>

int main(){
    
    char user_input;
    printf("\n Enter the value to check if character or number:");
    //scan for char
    scanf("%c",&user_input);

    if(user_input >= 'A' && user_input <= 'Z'){
        printf("\nThis is an Upper Case Alphabet");
        printf("\n The ascii value is %d",user_input);
        }
    else if (user_input >= 'a' && user_input <= 'z'){
         printf("This is an Lower Case Alphabet");
         printf("\n The ascii value is %d",user_input);
    }
    else if(user_input >= '0' && user_input <= '9'){
      printf("This is a number");
      printf("\n The ascii value is %d",user_input);
    }
    else
      printf("This is a not a number or an alphabet");
    return 0;    
}