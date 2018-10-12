//including library
#include <stdio.h>
#include <math.h>
//declaring the function
int reverse(int num);

int main(){
    int num, rev;

    //asking user for input   
    printf("Enter any number: ");
    scanf("%d", &num);
    
    //calling the function to reverse the number
    rev = reverse(num); 
    
    printf("Reverse of %d = %d", num, rev);
    //end the program
    return 0;
}
//
int reverse(int num)
{
    //using recursive function
    int digit = (int) log10(num);
    
    // Base condition
    if(num == 0)
        return 0;
    
    return ((num%10 * pow(10, digit)) + reverse(num/10));
}
