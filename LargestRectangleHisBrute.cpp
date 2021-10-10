#include<bits/stdc++.h>
using namespace std;



int main(){
    int n;cin>>n;int heights[n];
    int totalmax=0;int leftmax=0;int rightmax=0;int area=0;

    for(int i=0;i<n;i++){
        cin>>heights[i];
    }
   
    int maxArea = 0;
        // int length = sizeof(heights)/sizeof(heights[0]);
        for (int i = 0; i < n; i++) {
            int minHeight = INT_MAX;
            for (int j = i; j < n ;j++) {
                minHeight =min(minHeight, heights[j]);
                maxArea = max(maxArea, minHeight * (j - i + 1));
            }
        }
    cout<<maxArea<<endl;
    return 0;
}
