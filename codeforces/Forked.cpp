/* username: Harshit shrivastava (cf, cc, leetcode, atcoder) */

#include "bits/stdc++.h" 
using namespace std; 
#define max(a, b) (a < b ? b : a) 
#define min(a, b) ((a > b) ? b : a) 
#define mod 1000000007 

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
    int x[4] = {1,-1,1,-1};
    int y[4] = {1,-1,-1,1};
    while (T--) { 
       set<pair<int,int>>str1,str2;
      
        int a;
        int b;
        cin >>a >>b;

        int x1 , y1 , x2 , y2;
        cin>>x1>>y1>>x2>>y2;

        for(int j=0;j<4;j++){
            str1.insert(mp(x1 + x[j]*a , y1 + y[j]*b ));
            str2.insert(mp(x2 + x[j]*a , y2 + y[j]*b ));
            str1.insert(mp(x1 + x[j]*b , y1 + y[j]*a) );
            str2.insert(mp(x2 + x[j]*b , y2 + y[j]*a) );
        }

        int count =0;

        for(auto p :str1){
            if(str2.count(p)){
                count++;
            }
        }

        cout<<count<<endl;
       
       
         
    } 
    return 0; 
} 
