#include<iostream>
#include<string.h>
using namespace std;

int main()
{
    char str[20];
    int h,flag = 0;
    cout<<"Enter string:"<<"\n";
    cin>>str;

    h =strlen(str);

    for(int i=0 ;i<h;i++)
    {
        if(str[i] != str[h-i-1])
        {
            flag = 1;
            break;
        }
    }
    if(flag)
    {
        cout<<"string is not palindrome"<<"\n";
    }
    else
    {
        cout<<"string is palindrome"<<"\n";
    }
    return 0;
}
