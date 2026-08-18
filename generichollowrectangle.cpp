#include <iostream>
using namespace std;

int main () {

    int Row;
    int Column;
    cin >> Row;
    cin >> Column;

    for (int i = 0 ; i < Row ; i++)
    {
        if ( i== 0 || i== Row - 1)
        {
            for ( int r = 0 ; r < Column ; r++)
            {
                cout << "* ";
            }

        }
        else {
            
            cout << "* ";

            for ( int n = 0 ; n < Column - 2 ; n++)
            {
                cout << "  "; 
            }
            cout  << "* ";
        }

        cout << endl;
    }
}