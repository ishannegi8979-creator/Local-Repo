#include <iostream>
using namespace std;

int main (){

    int n;
    cin >> n;
    for (int i = 0 ; i < 3 ; i+=1)
    {
    if (i == 0 || i == 2 )
    {
        for (int p = 0 ; p < 5 ; p+=1)
        {
        cout << "* ";
        }
        cout << endl;

    }
      else{
        cout << "* ";
        {
            for( int r = 0 ; r < 3 ; r+=1)
            {
                   cout << "  " ;
            }
            cout << "* ";
        }
        cout << endl;
      }
    }

}