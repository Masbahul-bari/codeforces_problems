#include <iostream>
using namespace std;
int main()
{
    int A[100][100], note1, note2, countt=0 ;

    for(int i=1; i<=5; i++)
    {
        for(int j= 1; j<=5; j++)
        {
            cin>>A[i][j];
            if(A[i][j]==1)
            {
                note1=i;
                note2=j;
            }
        }
    }
    countt=abs(3-note1)+abs(3-note2);

    cout<<countt;
}
