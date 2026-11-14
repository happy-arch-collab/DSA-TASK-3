//Recursive program for Nth term of Fibonacci series
#include <iostream>
using namespace std;

long long fibo(int n)
{
    if(n==0)
    return 0;

    if(n==1)
    return 1;

    return fibo(n-1) + fibo(n-2);
}
int main()
{
    int n;

    cout<<"Enter a position: ";
    cin>>n;

    if(n<0 || n>30)
     cout<<"Enter a position between 0 and 30: ";
    else
     cout<<"Fibonacci number = "<<fibo(n);

return 0;
}