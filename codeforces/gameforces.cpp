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
        vector<int>health(N);

        for(int i=0;i<N; i++){
            cin>>health[i];
        }
        int count = 0;
        int spell = 0;
        for(int i=0; i<N ;i++ ){
            if(health[i] >= 2){
                spell = spell + 1;
            }else{
                count++;
            }
        }

        if(count > 0){
            if(count % 2 != 0){
                 cout<<spell+ (count / 2 ) + 1<<endl;
            }else{
                cout<<spell+ (count / 2 ) <<endl;
            }
           
        }else{
            cout<<spell<<endl;
        }

       
    } 
    return 0; 
} 
