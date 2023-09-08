#include <bits/stdc++.h>
using namespace std;
/*Given the distinct and valid birthdates of n people as triples (DD, MM, YYYY), order
them first by ascending birth months (MM), then by ascending birth dates (DD), and
finally by ascending age.*/

int main()
{
    // declaring the lists
    // initially sorted
    list<int> list1 = { 10, 20, 30 };
    list<int> list2 = { 25, 50, 60 };
 
    // merge operation
    list2.merge(list1);
 
    cout << "List: ";
 
    for (auto it = list2.begin(); it != list2.end(); ++it)
        cout << *it << " ";
 
    return 0;
}