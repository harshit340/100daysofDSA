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
        for(int i=0; i<N ;i++){
            cin>>arr[i];
        }

        int countN = 0;
        int countP = 0;
        int ans=0;
        int sum =0;
        int product = 0 ;
        
        for(int i = 0 ;i< N ;i++){
            if(arr[i]<0){
                countN++;
            }else{
                countP++;
            }
            sum = sum + arr[i];
            product = product * arr[i];
        }
       

        if(countN > countP){
            ans = countN - countP;
            countN = countN - ans;
        }

        if(product == -1){
            ans++;
        }

        cout<<ans<<endl;

    } 
    return 0; 
} 
