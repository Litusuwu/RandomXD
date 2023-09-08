#include <bits/stdc++.h>
#define Pi 3.14159265358979323846
/*Given an integer n (n  15), print ⇡ to n digits after the decimal point (rounded).
(e.g., for n = 2, print 3.14; for n = 4, print 3.1416; for n = 5, prints 3.14159.)*/

using namespace std;
int main(){
    double n;
    cin>>n;
    cout.precision(n);
    cout<<fixed;
    cout<<Pi;
    return 0;
}