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
        string s;
        cin>>s;
        int count = 0;

        for(int i = 0 ;i < s.size() ;i++){
            if(i<N && s[i] == '1'){
                count++;
            }else{
                break;
            }
        }

        /* cout<< "count of 1 "<<count<<endl; */

        if(count == N){
            if(N==4){
                cout<<"Yes"<<endl;
            }else{
                cout<<"No"<<endl;
            }
        }else{
             if(((count-1) * (count-1)) == N){
                cout<<"Yes"<<endl;
             }else{
                cout<<"No"<<endl;
             }
        }
    } 
    return 0; 
} 
