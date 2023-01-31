#include <iostream>
#include <string>
using namespace std;
int main()
{
    int up=0, low=0;
    string str;
    cin>>str;

    for(int i= 0; i<str.size(); i++)
    {
        if(isupper(str[i]))
            {up++;}
        else
            { low++;}
    }
    if(low>=up)
    {
        for(int i=0; i<str.size(); i++)
        {
            str[i]=tolower(str[i]);
        }
        cout<<str;
    }
    else if(up>low)
    {
        for(int i=0; i<str.size(); i++)
        {
            str[i]=toupper(str[i]);
        }
        cout<<str;
    }


}
