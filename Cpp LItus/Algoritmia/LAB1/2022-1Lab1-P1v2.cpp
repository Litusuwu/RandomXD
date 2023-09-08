#include <iostream>
using namespace std;

void solve(){
    
    //leo datos
    int N, P;
    cin>>N>>P;
    //       abc
    0 ?  -> 0000 <------
    1 ?  -> 0001
    2 ?  -> 0010
    3 ?  -> 0011
    4 ?  -> 0100
    5 ?  -> 0101
    6 ?  -> 0110
    7 ?  -> 0111
    8 ?  -> 1000


    //

    1 << N

    N: 2 -> 0100
    N: 3 -> 1000
    
    //mascara
    for(int i = 0 ; i < (1 << N) ; i++){

    }



}
int main(){
    solve();
}