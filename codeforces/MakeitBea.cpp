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
        long long int N; 
        cin >> N; 
        int arr[N];

        for(int i = 0 ; i< N ;i++ ){
            cin>>arr[i];
        }

        int maxi= INT_MIN;
        int index =0;
        
        for(int i = 0 ; i<N ;i++){
           maxi = max(maxi,arr[i]);
           index = i;
        }

        

        swap(arr[0] , arr[index]);

        if(arr[0] == arr[1]){
           if(arr[1] == arr[index]){
            cout<<"NO"<<endl;
            continue;
           }else{
            swap(arr[1] , arr[index]);
            cout<<"YES"<<endl;

            for(int i = 0 ;i<N ;i++){
                cout<<arr[i]<<" ";
            }
            cout<<endl;
           }
        }else{
            cout<<"YES"<<endl;

            for(int i = 0 ;i<N ;i++){
                cout<<arr[i]<<" ";
            }

            cout<<endl;
        }

        
        

       
    } 
    return 0; 
} 
