//Recursive program for N terms of Fibonacci series in C++
#include <iostream>
using namespace std;

void fibo(int i,int j,int n)
{
    if(n==0)
    return;

    cout<<i<<"";
    fibo(j,i+j,n-1);

}
int main()
{
    int n;

    cout<<"Enter number of terms: ";
    cin>>n;

    if(n<0 || n>80)
        cout<<"Enter a number between 0 and 80: ";
    else{
        cout<<"Fibonacci series: ";
        fibo(0,1,n);
    }

    return 0;  
}