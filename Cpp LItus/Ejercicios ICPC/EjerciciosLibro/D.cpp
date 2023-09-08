#include <bits/stdc++.h>
using namespace std;
/*Given n random integers, print the distinct (unique) integers in sorted order*/

int main(){
    int n, a;
    set<int> mapita;
    cin>>n;
    for(int i=0; i<n; i++){
        cin>>a;
        mapita.insert(a);
    }
    for(auto i:mapita)cout<<i<<" ";
    return 0;
}