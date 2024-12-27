/* username: Harshit shrivastava (cf, cc, leetcode, atcoder) */

#include "bits/stdc++.h" 
#include<string.h>
using namespace std; 
#define max(a, b) (a < b ? b : a) 
#define min(a, b) ((a > b) ? b : a) 
#define mod 1000000007 

#define forl(a, b, c) for (int(a) = (b); (a) <= (c); (a)++) 
#define forr(a, b, c) for (int(a) = (b); (a) >= (c); (a)--) 
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
         string s;
        cin >> s;
        int count=0;
        int count1=0;
        int max=INT_MIN;
        for(int i=0;i<n;i++){
            if(s[i]=='.'){
                count++;
                count1++;
            }
            if(count>max){
                max=count;
            }
            if(s[i]=='#'){
                count=0;
            }
        }

        if(max>=3){
            cout<<2<<"\n";
        }else{
           cout<<count1<<"\n";
        }
    } 
    return 0; 
} 
