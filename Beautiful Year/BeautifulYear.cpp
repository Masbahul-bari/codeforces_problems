#include <iostream>
using namespace std;
int main(){
    int y, x1, x2, x3, x4;
    cin>>y;
    for(;;)
    {
        y++;
        x1=y%10;
        x2=(y/10)%10;
        x3=((y/10)/10)%10;
        x4=(((y/10)/10)/10)%10;
        if(x1!=x2 && x1!=x3 && x1!=x4 && x2!=x3 && x2!=x4 && x3!=x4)
            {
                break;
            }
    }
    cout<<y;
}
