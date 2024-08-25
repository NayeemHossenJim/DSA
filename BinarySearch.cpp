#include<bits/stdc++.h>
using namespace std ;
int BinarySearch(int arr[], int n, int key)
{
    int s = 0 ;
    int e = n ;
    for (int i = 0; i < n; i++)
    {
        int mid = (s+e)/2;
        if(arr[mid]==key)
        {
            return mid ;
        }
        else if(arr[mid]>key)
        {
            e=mid-1 ;
        }
        else
        {
            s=mid+1;
        }
    }
    return -1 ;
}
int main ()
{
    int n ;
    cout << "Please Enter your Array Size : " ;
    cin >> n ;
    int arr [n];
    cout << "Please Enter your Array : " ;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i] ;
    }
    int key ;
    cout << "Please Enter your Key : " ;
    cin >> key ;
    cout << BinarySearch(arr,n,key);
}