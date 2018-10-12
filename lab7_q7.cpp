//including library
#include <stdio.h>
#include <math.h>
//declaring the function
int reverse(int num);
int isPalindrome(int num);

int main(){
    int num;
    
    //asking user for the input
    printf("Enter any number: ");
    scanf("%d", &num);
    
    if(isPalindrome(num) == 1)
    {
        printf("%d is palindrome number.\n", num);
    }
    else
    {
        printf("%d is NOT palindrome number.\n", num);
    }
    //end the program 
    return 0;
}



//declaring a function to check pallindrome numbers
int isPalindrome(int num){

    if(num == reverse(num))
    {
        return 1;
    }
    //end the program
    return 0;
}


//using recursive function
int reverse(int num)
{
    int digit = (int)log10(num);
    
    if(num == 0)
        return 0;

    return ((num%10 * pow(10, digit)) + reverse(num/10));
}


