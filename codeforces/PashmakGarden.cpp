/* username: Harshit shrivastava (cf, cc, leetcode, atcoder) */

#include "bits/stdc++.h" 
using namespace std; 
#define max(a, b) (a < b ? b : a) 
#define min(a, b) ((a > b) ? b : a) 
#define mod 1000000007 

#define INF 1000000000000000003 
typedef long long int ll; 
typedef vector<int> vi; 
typedef pair<int, int> pi; 
#define F first 
#define S second 
#define pb push_back 
#define pob pop_back 
#define mp make_pair 
int main() 
{ 
    ios::sync_with_stdio(0); 
    cin.tie(0); 
     int arr[4];
     int length;
     for(int i  =0 ; i<4 ; i++){
        cin>>arr[i];
     }
    
     if(arr[0]==arr[2]){
        length = abs(arr[1]-arr[3]);
       
        arr[0] = arr[0]+length;
        arr[2] = arr[2]+length;
     }

     else if(arr[1]==arr[3]){
         
        length = abs(arr[0]-arr[2]);
        arr[1]=arr[1]+length;
        arr[3]=arr[3]+length;
     }

     else if(abs(arr[0]-arr[2]) == abs(arr[1]-arr[3])){
        int temp = arr[1];
        arr[1]=arr[3];
        arr[3]=temp;
     }
     else {
        cout<<-1;
        return 0;
     }

      for(int i  =0 ; i<4 ; i++){
        cout<<arr[i]<<" ";
     }


    return 0; 
} 
