#include <iostream>

using namespace std;

int main(){

   int n;
   cin >> n;

for (int row = 0 ; row < n ; row = row + 1)
{
    for ( int column  = 0 ; column < n ; column = column + 1 )
    {
        if ( row == 0 || column == 0 || column == n - row - 1 )
        {
             cout << "* ";
        }
        else {

            cout << "  ";
        }


    }
      
    cout << endl ; 

}

}