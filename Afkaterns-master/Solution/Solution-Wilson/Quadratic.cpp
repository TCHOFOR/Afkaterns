#include <iostream>
#include <math.h>

using namespace std;

template < class T >

void Quadratic( T a, T b, T c ) {
    if ( a == 0 ) {
        cout << "a cannot be small " << endl;
    }else{
        T d = ( b * b ) - ( 4 * a * c);
        T x1 = (-b - sqrt(d))/(2*a);
        T x2 = ( -b + sqrt(d))/(2*a);
        cout << " x = " << x1 << "   " << " x = " << x2 << endl; 
        if ( d == 0 ) cout << "Root are Equal " << endl;
        if ( d < 0 ) cout << "Root are complex" << endl;
        if ( d > 0 ) cout << " Root are Imaginary " << endl;
    }
}

int main(int argc, char const *argv[])
{
    float a,b,c;
    cout << "Enter Numbers Variables a , b , c " ;
    cin>>a;
    cin>>b;
    cin>>c;
    Quadratic(a,b,c);
    return 0;
}
