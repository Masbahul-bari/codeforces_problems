#include <iostream>
#include<string>
using namespace std;

int main()
 {
    int n, t;
    cin>>n>>t;
    string str;
    char temp;
    cin>>str;

    for(int i=0; i<t; i++)
    {
        for(int j=0; j<str.size()-1; j++)
        {
            if(str[j]=='B' && str[j+1]=='G')
            {
                temp=str[j];
                str[j]=str[j+1];
                str[j+1]=temp;
                j++;
            }
        }
    }

    cout<<str<<endl;

    return 0;
}
