#include <iostream>
using namespace std ;

int main() {
// outer loop for counting rows
    for (int row = 0; row  < 3; row = row + 1)
    {
        //! inner loop for colunms
        for(int column = 0 ; column < 5 ; column = column + 1  )
        {
            //* printing *
            cout << "* ";
        }
        cout << endl;
    }
}