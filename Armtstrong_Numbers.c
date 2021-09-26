/*
* Name: Alain Sfeir
* Date: 9/24/2021
* Question number: problem2 
* Description: 
Write a program to take input from user until the user enters -1 and display whether the 
number is an Armstrong number or not.

*/

#include<stdio.h> 
//Armstrong number is a number that is equal to the sum of cubes of its digits. 
//For example 0, 1, 153, 370, 371 and 407 are the Armstrong numbers. 
 int main()    
{
    while(1)
    {
        //First verify user input
        //if -1 code will break and stop 
        int user_input,r,sum=0,temp;    
        printf("\nenter the number=");    
        scanf("%d",&user_input);
        if (user_input == -1){
            break;
        }else{
            temp=user_input;    
            while(user_input>0)    
            {    
            r=user_input%10;    
            sum=sum+(r*r*r);    
            user_input=user_input/10;    
            }    
            if(temp==sum)    
            printf("\nArmstrong  number ");    
            else    
            printf("\nNot armstrong number");
            }   
        
    }    
        return 0;  
}   