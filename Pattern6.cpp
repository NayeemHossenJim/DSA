#include <bits/stdc++.h>
using namespace std ;
int main ()
{
    int row , count = 1 ;
    cin >> row  ;
    for (int i = 1; i <= row; i++)
    {
        for (int j = 1; j <=i; j++)
        {
            cout << count << " "  ;
            count++ ;
        }
        cout<< endl ;
    }
}