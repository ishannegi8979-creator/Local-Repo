#include <iostream>
using namespace std ;

int main() {

    for (int row = 0; row  < 3; row = row + 1)
    {
        for(int column = 0 ; column < 5 ; column = column + 1  )
        {
            cout << "* ";
        }
        cout << endl;
    }
}