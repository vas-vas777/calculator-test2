#include <iostream>
#include <cstddef>

#include "calculator.hpp"
using namespace std;

int main()
{
    float x, y;
    cin >> x;
    
    cin >> y;
    
    
    cout << sum( x, y ) << endl;
    cout << sub( x, y ) << endl;
    cout << mult( x, y ) << endl;
    float *s=dev(x, y);
    if (s)
        cout << *s << endl;
    else
        cout << "Forbidden" << endl;
    delete s;
    cout << power( x, y ) << endl;
    if (x >= 0)
    cout << sq( x ) << endl;
    else
    cout << "Forbidden" << endl;    
    return 0;
}
