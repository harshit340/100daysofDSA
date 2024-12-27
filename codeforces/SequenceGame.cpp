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
        vector<long long int> arr(N);
        vector<long long int>v;
        for(long long int i=0; i<N; i++){
            cin>>arr[i];
        }
        v.push_back(arr[0]);

        if(N==1){
            cout<<N<<endl;
            cout<<v[0]<<endl;
            continue;
        }

        for(long long int i=1;i<N ;i++){
            if(v.back()<=arr[i]){
                v.push_back(arr[i]);
            }else{
                v.push_back(arr[i]);
                i--;
            }
        }

        cout<<v.size()<<endl;
         
          for(int i=0; i<v.size(); i++){
            cout<<v[i]<<" ";
        }

        cout<<endl;

    } 
    return 0; 
} 
