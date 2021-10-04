#include <bits/stdc++.h>
using namespace std;

bool binarySearch(int arr[],int key,int n){

    int l=0;                                 //Initializing Left Pointer to 0th Index of the array//
    int r=n-1;                             //Initializing Right Pointer to (n-1)th Index of the array//
    while (l<r)
    {
        int mid = (l+r)/2;                         //Middle of the array//
        if (arr[mid]==key)
        {
            return true;
        }
        if (arr[mid]>key)
        {
            r=mid;
        }
        if (arr[mid]<key)
        {
            l=mid;
        }
    }
    return false;
   
}


int main(){

int arr[]={1,3,4,5,7,8,9,11,65};                    //Array has to be in Sorted Order//
int key;cin>>key;
bool check=(binarySearch(arr,key,9));
if (check)
{
    cout<<"Element found in the array"<<endl;
    }
else{
    cout<<"Element Not Found"<<endl;
}
    return 0;
}