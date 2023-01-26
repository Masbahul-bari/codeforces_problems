#include <iostream>
using namespace std;

int main()
{
    int a,x1=0, x2=0, x3=0;
    cin>>a;
    int A[100][100];
    for(int i=0; i<a; i++)
    {
        for(int j=0; j<3; j++)
        {
            cin>>A[i][j];
        }
        x1=x1+A[i][0];
        x2=x2+A[i][1];
        x3=x3+A[i][0];
    }
    if(x1==0 && x2==0&& x3==0)
        cout<<"YES";
    else
        cout<<"NO";
}
