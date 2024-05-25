//Q7: Explore:
//Can the same function name be used for different functions without any conflict?
#include<iostream>
using namespace std;
void pt(int n)   //.......................1
{
    cout<<n+1<<endl;
}
void pt(float n)//.........................2
{
    cout<<n+2;
}
int main()
{
    int n;
    cin>>n;
    pt(n);
}
//yes this is possible. its only not possible if argument of 2 is int n.