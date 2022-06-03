#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    unsigned long long x,x2,x4,x3,x6,x9,x10,x15,x24,x28,x54,x64;
    cout << "vvedit x= ";
    cin >> x;
    x2 = x * x;
    x3 = x * x2;
    x4 = x2 * x2;
    x6 = x3 * x3;
    x9 = x6 * x3;
    x10 = x6 * x4;

    x15 = x6 * x9;
    x24 = x15 * x9;
    x28 = x24 * x4;
    x54 = x28 * x28;
    x64 = x54 * x10;
    
    cout << "x^4=" << x4<<endl;
    cout << "x^6=" << x6<<endl;
    cout << "x^9=" << x9<<endl;
    cout << "x^15=" << x15<<endl;
    cout << "x^28=" << x28<<endl;
    cout << "x^64=" << x64<<endl;

}