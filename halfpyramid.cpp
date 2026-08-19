#include <iostream>
using namespace std;

int main (){
  // OUTER LOOP FOR COUNTING ROWS
    for (int row = 0 ; row < 5 ; row = row + 1)
    {
        //! INNER LOOP FOR COLUMN 
        for( int column = 0 ; column < row + 1 ; column = column + 1)
        {
            //? PRINTING STATEMENT
            cout << "* ";
        }
        cout << endl;
    }
}
