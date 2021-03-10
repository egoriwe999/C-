#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    cout << " Write the numbers: B , A , C" << endl;

    int a, b, c;
    cin >> b >> a >> c;
    double d;
    d = (b * b) - (4 * a * c);
    cout << "D=" << d <<"\n";
    if (d > 0) {
        int x1 = (-b + sqrt(d)) / (2 * a);
        int x2 = (-b - sqrt(d)) / (2 * a);
        cout << "x^1=" << x1 << "\n" <<"x^2=" << + x2;
    }
    else
        if (d < 0)
            cout << " (D<0) => don`t can work" << endl;
    
// (c) egoriwe999 
    // my telegram: @egoriwe999