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
        string str;
        cin>>str;
        int maxi1 = -1;
        int count = 0;
        int maxi2 = -1;
        int count1 = 0;
        for(int i=0;i<N;i++){
            if(str[i] == '>'){
                count++;
            }else{
                count = 0;
            }

            if(str[i] == '<'){
                count1++;
            }else{
                count1=0;
            }
       
            maxi1 = max(maxi1,count);
            maxi2 = max(maxi2,count1);
        }

        if(maxi1 > maxi2){
           cout<<maxi1+1<<endl;
        }else{
            cout<<maxi2+1<<endl;
        }

        
    } 
    return 0; 
} 
