#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    int i=0;
    cout<<"Enter size of array: ";
    cin>>n;
    char arr[n];
    cout<<"Enter array elements: ";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    sort(arr,arr+n);
    int max=0;
    char ans;
    while(i<n)
    {
        int curr_fre=1;
        while(arr[i+1]=arr[i])
        {
            curr_fre++;
            i++;
        }
        if(max<curr_fre)
        {
          max=curr_fre;
          ans=arr[i];
          cout<<ans<<" "<<max;
        }
        else
        cout<<"No duplicate found";
    }
    
}