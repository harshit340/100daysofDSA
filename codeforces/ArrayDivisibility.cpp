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
        int arr[N] = {0};
        arr[1] = 1;
        for(int i = 0; i<N ; i++){
           arr[i] = (i+1)*N;
        }

        for(int i=0;i<N;i++){
            cout<<arr[i]<<" ";
        }
    } 
    return 0; 
} 
