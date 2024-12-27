/* username: Harshit shrivastava (cf, cc, leetcode, atcoder) */

#include "bits/stdc++.h" 
using namespace std; 
#define max(a, b) (a < b ? b : a) 
#define min(a, b) ((a > b) ? b : a) 
#define mod 1000000007 
#define INF 1000000000000000003 
typedef long long int ll; 
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
        long long int n , k , x; 
        cin >> n >> k >> x;

        if(x!=1){
            cout<<"YES"<<endl;
            cout<<n<<endl;
            for(int i = 1 ; i<=n ; i++){
                cout<<1<<" ";
            }
            cout<<endl;
           
        }else{
            vector<int>v;
            for(int i =2 ; i<=k ;i++){
                v.push_back(i);
            }
            if(v.empty() || n<v[0]){
                cout<<"NO"<<endl;
            }
            else{
                if(n%2==0){
                    cout<<"YES"<<endl;
                    cout<<n/2<<endl;
                    for(int i =1 ; i<=n/2 ;i++){
                        cout<<2<<" ";
                    }
                    cout<<endl;
                }else{
                    if(k<3){
                        cout<<"NO"<<endl;
                    }else{
                        int temp = n-3;
                        cout<<"YES"<<endl;
                        int ans = temp/2;
                        cout<<1+ans<<" ";
                        cout<<3<<" ";
                        for(int i=1 ;i<=temp/2;i++){
                            cout<<2<<" ";
                        }
                        cout<<endl;
                    }
                }
            }
        }
    }
    return 0; 
} 
