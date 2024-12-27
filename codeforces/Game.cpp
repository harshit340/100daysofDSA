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
       
        string str;
        cin>>str;
        ll countzero=0;
        ll countone=0;

        for(ll i = 0 ; i< str.size() ; i++){
            if(str[i]=='0'){
                countzero++;
            }else{
                countone++;
            }
        }
      /*   cout<<"zero"<<" "<<countzero<<endl;
        cout<<"one"<<" "<<countone<<endl; */
        
        int diff = abs(countzero-countone);
        int pair = 0;
        if(countzero>=countone){
             pair = countzero - diff;
        }else{
            pair = countone - diff;
        }

        /* cout<<"pair"<<" "<<pair<<endl; */

        if(pair == 0){
            cout<<"NET"<<endl;
            continue;
        }

        if(pair%2!=0){
            cout<<"DA"<<endl;
        }else{
            cout<<"NET"<<endl;
        }
     

        

        
    } 
    return 0; 
} 
