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
        long long int N; 
        cin >> N; 
        int arr[N];
        for(int i=0;i<N;i++){
            cin>>arr[i];
        }
        int count =0;
        
        for(int i=0 ;i<N-1 ;i++){
           count +=(arr[i]%2 == arr[i+1]%2);
        }

        cout<<count<<endl;

    } 
    return 0; 
} 
