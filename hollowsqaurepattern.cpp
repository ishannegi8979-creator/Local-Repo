#include <iostream>
using namespace std ;

int main () 
{
  for ( int row = 0 ; row < 4 ; row = row + 1)
   {

    if( row == 0 || row == 3)
    {
        for ( int i = 0 ; i < 4 ; i = i+1)
        {
            cout << "* ";
        }

    }
    else {

        cout << "* ";
    
    for ( int r = 0 ; r < 2 ; r = r+1)
    {
        cout << "  ";
    }
   
     cout << "* ";
   }
        cout << endl ;

   }
}
