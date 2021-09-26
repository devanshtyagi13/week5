#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int main() {
    int n,key;
    cout<<"Enter array size: ";
    cin>>n;
    cout<<"Enter key value: ";
    cin>>key;
    int arr[n];
    cout<<"Enter array elements: ";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    sort(arr,arr+n);
    int l,r;
    l=0;
    r=n-1;
    while(l<r){
        if(arr[l]+arr[r]==key)
        {
            cout<<arr[l]<<" "<<arr[r];
        }
        else if(arr[l]+arr[r]<key)
        l++;
        else
        r--;
    }
    cout<<"No such pair exists";

}