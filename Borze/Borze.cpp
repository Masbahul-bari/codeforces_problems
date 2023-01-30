#include <iostream>
#include<string>
using namespace std;
int main()
{
    string Borze_code;
    cin>>Borze_code;
    for(int i=0; i<=Borze_code.size()-1; i++)
    {
       if(Borze_code[i]=='-')
        {
            if(Borze_code[i+1]=='-')
                {
                    cout<<"2";
                    i++;
                }
             else
                {
                    cout<<"1";
                    i++;
                }
        }
       else
       {cout<<"0"; }

    }
    return 0;
}
