#include<iostream>
using namespace std;
int fact(int n)
{
    if(n>1)
    return n*fact(n-1);
    else 
    return 1;
}

int main()
{ int num,f;
  cout<<"Enter a number: ";
  cin>>num;
  f=fact(num);
  cout<<"Factorial of"<<num<< "is" <<f ;
  return 0;
}

