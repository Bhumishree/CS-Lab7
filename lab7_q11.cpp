//including library
#include <iostream>
using namespace std;
//declaring variables
int hcf(int n1, int n2);

int main()
{
   int n1, n2;
//asking the user for input
   cout << "Enter two positive integers: ";
   cin >> n1 >> n2;
//returning the result
   cout << "H.C.F of " << n1 << " & " <<  n2 << " is: " << hcf(n1, n2);
//end the program
   return 0;
}

int hcf(int n1, int n2)
{
    if (n2 != 0)
       return hcf(n2, n1 % n2);
    else 
       return n1;
}
