#include<iostream>
using namespace std;

int main() {
   //! Taking input from user 

    int RowCount;

    cin >> RowCount;

    //? Outer loop for counting rows

    for (int r = 0 ; r < RowCount ; r= r + 1)
    {

        for( int column = 0 ; column < r + 1 ; column = column + 1)
        {
        
            //* Printing Statement

            cout << column + 1 ;

        }

        cout << endl ;
    }
}
