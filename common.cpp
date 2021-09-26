#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n,m;
    cout<<"Enter size of first array: ";
    cin>>n;
    cout<<"Enter size of second array: ";
    cin>>m;
    int arr1[n],arr2[m];
    cout<<"Enter first array elements: ";
    for(int i=0;i<n;i++)
    {
        cin>>arr1[i];
    }
    cout<<"Enter second array elements: ";
    for(int i=0;i<m;i++)
    {
        cin>>arr2[i];
    }
    int i=0,j=0;
    while(i<n &&j<m)
    {
        if(arr1[i]>arr2[j])
        i++;
        else if(arr1[i]<arr2[j])
        j++;
        else{
            cout<<arr1[i]<<" ";
            i++;
            j++;
        }
    }
    while(i<n)
    {
        cout<<arr1[i]<<" ";
        i++;
    }
    while(j<m)
    {
        cout<<arr2[j]<<" ";
        j++;
    }
}