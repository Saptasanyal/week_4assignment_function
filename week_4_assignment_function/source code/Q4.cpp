//Write a function to count the number of digits in a number and then 
//print the square of this number.
#include<iostream>
using namespace std;
int digit(int n)
{
    
    int j=0;
    while(n!=0)
    {
        n/=10;
        j+=1;
    }
    return j;
}
int main()
{
    int n;
    cout<<"Enter the digit: ";
    cin>>n;
    cout<<"Number of digits is: "<<digit(n)<<endl;
    cout<<"The square of the digit is: "<<n*n;
    return 0;
}