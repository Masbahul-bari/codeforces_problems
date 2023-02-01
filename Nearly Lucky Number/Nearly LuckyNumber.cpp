#include<iostream>
#include<string>
using namespace std;
int main()
{
    int number, digit, countt;
    string str;
    cin>>str;
    for(int i=0; i<str.size(); i++)
    {
        if(str[i]=='4' || str[i]=='7')
        {
            countt++;
        }
    }
    if(countt==4 || countt==7)
    {
        cout<<"YES";
    }

    else
    {
        cout<<"NO";
    }




    /*
    cin>>number;
    while(number!=0)
    {
       digit = number%10;
       if(digit==4 || digit==7)
       {
           number /= 10;
           countt++;
       }
       else
           break;
    }
    if(countt==4 || countt==7)
        cout<<"YES";
    else
        cout<<"NO";
    */

}
