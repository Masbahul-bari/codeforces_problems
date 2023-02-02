#include <iostream>
#include<string>
using namespace std;
int main()
{
    int number_of_stone, temp=0;
    cin>>number_of_stone;
    string str;
    cin>>str;
    for(int i=0; i<number_of_stone-1; i++)
    {
        if(str[i]==str[i+1])
        {
            temp++;
        }
    }
    cout<< temp ;

}


/*#include <iostream>
using namespace std;

int main() {
  char name[100];
  cout << "Enter a name: ";
  cin.getline(name, 100);
  cout << "Name: " << name << endl;
  return 0;
}
*/
