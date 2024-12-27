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
        long long int n , m; 
        cin >> n >> m;
        int arr[n][m];

        for(int i=0;i<n ; i++){
            for(int j=0 ; j<m ;j++){
                cin>>arr[i][j];
            }
            
        }   
        
        if(n==1 && m==1){
            cout<<-1<<endl;
            continue;
        }

    
        for(int i = 0 ; i<n ; i++){
                for(int j=0 ; j<m ; j++){
                     if(i<n-1 && m==1){
                        swap(arr[i][j] , arr[i+1][j]);
                     }else if(j<m-1){
                        swap(arr[i][j] , arr[i][j+1]);
                     }
                    

                }
            } 

        
        for(int i=0;i<n ; i++){
            for(int j=0 ; j<m ;j++){
                cout<<arr[i][j]<<" ";
            }
            cout<<endl;
            
        }


    } 
    return 0; 
} 

