
/*
* Name: Alain Sfeir
* Date: 9/24/2021
* Question number: problem 1 
* Description: 
Write a program to read a number from a user. Find whether the number is divisible by 
two or not using function. Finally, display the output.
  
*/
#include <stdio.h>

void Divisible_func(int value_test , int value_check_against){
    /// in this function we provide flexibility since user can pick to check what it he
    //wants the value to be checked if it is divisible by 
    //Second we use the modulo operator
    //modulo operator returns the remainder of the division between 2 values
    // if the result is 0 then the value is divisible
    //anything else implies that value is not divisible
    if((value_test % value_check_against == 0))
    {
        printf("\nNumber %d is divisible %d",value_test ,value_check_against);
    }else{
        printf("\nNumber %d is NOT divisible %d",value_test ,value_check_against);
    }

}

int main(){
    //get the value to test from user
    int user_input;
    printf("\n Enter number to check if divisible by 2:");
    scanf("%d",&user_input);
    //print back the value to the use to verify 
    printf("\nYou have entered number %d",user_input);
    // run the function created above
    // parameters : the value given by user , and the number to see if it is divisible by it
    //default 2 since problem requires by 2
    Divisible_func(user_input,2);


    return 0;
}