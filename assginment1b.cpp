#include <iostream>
using namespace std;

int main()
{
    char str[50];
    int i,len,flag=0;

    cout<<"Enter the string:";
    cin>>str;
    for(i=0;str[i]!='\0';i++)
    {
        len++;
 
    }
     for(i=0;i<len; i++)
     {
        if(str[i]!=str[len-i-1])
        {
            flag=1;
            break;

        }
     }
     if (flag==1)
     {
        cout<<"str"<<"is not a palindrome";
     }
      else 
      cout<<str<<"is a plaindrome";

      return 0;
     }