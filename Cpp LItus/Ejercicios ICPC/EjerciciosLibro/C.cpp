#include <bits/stdc++.h>
using namespace std;
/*Given a date (in the past), determine the day of the week (Monday, . . . , Sunday) on
that day and the number of day(s) that has elapsed since that day until present.
(e.g., 9 August 2010—the launch date of the first edition of this book—is a Monday.)*/


int dayofweek(int d, int m, int y){
    static int t[] = { 0, 3, 2, 5, 0, 3, 5, 1, 4, 6, 2, 4 };
    y -= m < 3;
    return ( y + y / 4 - y / 100 + y / 400 + t[m - 1] + d) % 7;
}
 
// Driver Code
int main(){
    short int a, b, c;
    char k;
    cout<<"Ingrese fecha en formato dd/mm/aaaa: "<<endl;
    cin>>a>>k>>b>>k>>c;
    int day = dayofweek(a, b, c);
    switch (day)
    {
    case 0:
        cout << "Domingo";
        break;
    case 1:
        cout << "Lunes";
        break;
    case 2:
        cout << "Martes";
        break;
    case 3:
        cout << "Miercoles";
        break;
    case 4:
        cout << "Jueves";
        break;
    case 5:
        cout << "Viernes";
        break;
    case 6:
        cout << "Sabado";
        break;
    }

    return 0;
}