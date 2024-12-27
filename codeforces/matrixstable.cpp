/* username: Harshit shrivastava (cf, cc, leetcode, atcoder) */

#include "bits/stdc++.h" 
using namespace std; 

int main() 
{ 
    ios::sync_with_stdio(0); 
    cin.tie(0); 
    int T; 
    cin >> T; 
    while (T--) { 
        long long int row , col; 
        cin >> row >> col;
        int arr[row+2][col+2];

        for(int i=0 ; i<=row+1 ; i++){
            for(int j=0 ; j<=col+1 ; j++){
                arr[i][j] = 0;
            }
        }
        for(int i = 1 ;i<=row ;i++){
            for(int j=1 ; j<=col ; j++){
                cin>>arr[i][j];
            }
        } 

        for(int i = 1 ;i<=row ;i++){
            for(int j=1 ; j<=col ; j++){
               if(arr[i][j] > arr[i+1][j] && arr[i][j] > arr[i-1][j] && arr[i][j] > arr[i][j-1] && arr[i][j] > arr[i][j+1] ){
                 arr[i][j] = max(arr[i+1][j],max(arr[i-1][j] , max(arr[i][j-1],arr[i][j+1])));
               }
            }
        } 

           for(int i = 1 ;i<=row ;i++){
            for(int j=1 ; j<=col ; j++){
                cout<<arr[i][j]<<" ";
            }
            cout<<endl;
        }




    } 
    return 0; 
} 
