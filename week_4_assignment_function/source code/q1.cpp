//Q1 : Write a function to print squares 
//of first n natural numbers, taking n as argument to the function
#include<iostream>
using namespace std;
int square(int n)
{
    int j=0;
    for(int i=1;i<=n;i++)
    {
        j+=i*i;
    }
    return j;
}
int main()
{
    int n;
    cin>>n;
    cout<<square(n);
    return 0;
}