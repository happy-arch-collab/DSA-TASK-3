//Recursive program for the factorial of a number in C++
#include <iostream>
using namespace std;

long long fact(int n)
{
    if(n==0)
    return 1;

    return n * fact(n-1);
}
int main()
{
    int n;

    cout<<"Enter a number: ";
    cin>>n;

    if(n<0 || n>20)
     cout<<"Enter a number between 0 and 20";
    else
     cout<<"Factorial = "<<fact(n);
    
return 0;

}