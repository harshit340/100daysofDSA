/* username: Harshit shrivastava (cf, cc, leetcode, atcoder) */

#include "bits/stdc++.h" 
using namespace std; 

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
        long long int N , K; 
        cin >> N >> K;
        vector<int>arr(N);

        for(int i = 0;i<N;i++){
            cin>>arr[i];
        }

        if(K==2 || K==3 || K==5){
            int digi = 0;
            int mincount = INT_MAX;
            int mini = INT_MAX;
           for(int i =0 ; i <N ; i++){
            digi = arr[i] % K;
            /* cout<<"digi"<<digi<<endl; */
            if(digi == 0){
                mini = 0;
            }else{
                mincount = abs(K - digi);
                 
                mini = min(mini , mincount);
            }
           
           }
           cout<<mini<<endl;
           
           
        }else{
            int count = 0;
        for(int i = 0; i<N ;i++){
            if(arr[i]%2 == 0){
                if(arr[i]%4==0){
                    cout<<0<<endl;
                    break;
                }
                count++;
            }
        }

        if(count>=2){
            int ans = max(0,2-count);
            cout<<ans<<endl;
        }else{
            
        }
    } 


    }
    
    return 0; 
} 
