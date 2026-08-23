#include <iostream>
using namespace std ;

int main () {
int n;
cin >> n;

    for ( int i = 0 ; i < n ; i = i + 1)
    {
            int p = 0 ;
            
        for ( int j = 0 ; j < ((2 * n) -1) ; j = j + 1)
        {
        
            if ( j < n - i -1)
            {
                cout << " " ;
            }
            else if ( p < (2 * i )+ 1 )
            {
                if ( p == 0 || p == 2*i || i == n-1)
                cout << "*";
                else {

                    cout << " ";
                }
                p++ ; 
            }

            else {
                cout << " ";
            }
            
        }

        cout << endl ;
    }
}
