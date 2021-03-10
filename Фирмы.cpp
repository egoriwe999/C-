#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    int mxcnt = -1; 
    int id = -1; 
    for (int i = 0; i < t; i++)
    {
        int a, b;
        cin >> a >> b;
        if (a * b > mxcnt)
        {
            mxcnt = a * b;
            id = i + 1;
        }
    }
    cout << id;
}
// (c) egoriwe999 
    // my telegram: @egoriwe999

