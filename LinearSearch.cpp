#include<bits/stdc++.h>
using namespace std ;

int LinearSearch(int arr[],int n, int key)
{
    for (int i = 0; i < n; i++)
    {
        if(arr[i]==key)
        {
            return i; 
        }
    }
    return -1 ;
    
}
int main ()
{
    int n ;
    cout << "Please Enter Your Array Size : " ;
    cin >> n ;
    int arr [n];
    cout << "Please Enter Your Array : " ;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i] ;
    }
    int key ;
    cout << "Please Enter the key : " ;
    cin >> key ;
    cout << LinearSearch(arr,n,key) ;
}