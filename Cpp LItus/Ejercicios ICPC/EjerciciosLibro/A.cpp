#include <bits/stdc++.h>
#include <fstream>
#include <iomanip>
/*Using Java, read in a double
(e.g., 1.4732, 15.324547327, etc.)
echo it, but with a minimum field width of 7 and 3 digits a*/

using namespace std;
int main(){
    double n;
    cin>>n;
    cout.fill('s');
    cout.precision(3);
    cout<<fixed;
    cout<<setw(7)<<n<<endl;
    return 0;
}