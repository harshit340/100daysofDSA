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
    int T; 
    cin >> T; 
    while (T--) { 
        long long int n; 
        cin >> n;
        vector<int>arr(n);
        for(int i=0; i<n ;i++){
            cin>>arr[i];
        }

        int count = 0;
        bool toggle = true;
        for(int i=n-1 ; i>0 ;i--){
           
                while (arr[i - 1] >= arr[i]) {
                     if (arr[i - 1] == 0) {
                         break;
                    }
                    arr[i - 1] = abs(arr[i - 1] / 2);
                   
                    count++;
                }

            if(arr[i] == arr[i-1]){
               toggle = false;
            }
            
        }
       
          
          
           if(toggle){
            cout<<count<<endl;
           }else{
            cout<<-1<<endl;
           }
      


    } 
    return 0; 
} 
