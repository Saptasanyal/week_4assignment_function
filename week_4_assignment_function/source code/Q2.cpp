// Write a function that takes the radius 
//of a circle as an argument and returns its area.

#include<iostream>
using namespace std;
float area(float r)
{
    return 3.14*r*r;
}
int main()
{
    float r;
    cin>>r;
    cout<<area(r);
    return 0;
}