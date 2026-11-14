  //Recursive program for sum of first N natural numbers in C++
  #include <iostream>
  using namespace std;

  int sum(int n)
  {
    if(n==0)
    return 0;

    return n + sum(n-1);
  }
  int main()
  {
    int n;

    cout<<"Enter N:";
    cin>> n;

    if(n<0)
     cout<<"Invalid input";
    else
     cout<<"Sum = "<< sum(n);

    return 0;
  }