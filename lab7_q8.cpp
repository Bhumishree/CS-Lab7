//including library
#include <stdio.h>

//declaring function
int sumOfDigits(int num);


int main()
{
    int num, sum;
    
    printf("Enter any number to find sum of digits: ");
    scanf("%d", &num);
    
    sum = sumOfDigits(num);
    
    printf("Sum of digits of %d = %d", num, sum);
    
    return 0;
}


//using recursive function
int sumOfDigits(int num)
{
    // Base condition
    if(num == 0)
//end the program
        return 0;
        
    return ((num % 10) + sumOfDigits(num / 10));
}


