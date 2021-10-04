#include<bits/stdc++.h>
using namespace std;

 
void Transpose(int arr[3][3]){
    for (int i = 0; i < 3; i++)
    {
      for(int j=i;j<3;j++){
          swap(arr[i][j],arr[j][i]);
      }
    }
}



 int main(){
//  int n;cin>>n;
 int arr[3][3];
 for (int i = 0; i < 3; i++)                            //Taking Input From User of Matrix//
 {
     for (int j = 0; j<3; j++)
     {
        cin>>arr[i][j];
     }
     
 }
 
 Transpose(arr);
cout<<endl;
  for (int i = 0; i < 3; i++)                            //Taking Input From User of Matrix//
 {
     for (int j = 0; j<3; j++)
     {
        cout<<arr[i][j]<<" ";
     }
      cout<<endl;
 }

    return 0;
 }