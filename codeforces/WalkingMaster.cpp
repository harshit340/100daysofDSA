/* username: Harshit shrivastava (cf, cc, leetcode, atcoder) */

#include "bits/stdc++.h" 
using namespace std; 
#define max(a, b) (a < b ? b : a) 
#define min(a, b) ((a > b) ? b : a) 
#define mod 1000000007 
#define for(a, c) for (int(a) = 0; (a) < (c); (a)++) 
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
        long long int a,b,c,d; 
        cin >> a >> b >> c >> d;
        int count = 0;
        
        if(d<b){
          cout<<-1<<endl;
        }
        else if(d<c+(b-a)){
            cout<<-1<<endl;
        }
        else if(c==a && d<b){
            cout<<-1<<endl;
        }else if(c==a && d==b){
            cout<<0<<endl;
        }else{
            count += d-b;
            a+=count;
            count += a-c;
            cout<<count<<endl;
        }
    } 
    return 0; 
} 



/* 
  if(b>d){
          cout<<-1<<endl;
        }else if(b<d){
           count = abs(d-b);
           a = a+count;
           if(a>c){
             count = count + abs(a-c);
             cout<<count<<endl;
            }else if(a<c){
             cout<<-1<<endl;
            }else if(a==c){
              cout<<-1<<endl;
            }

        }else if(b==d){
            if(a>c){
             count = abs(c-a);
             cout<<count<<endl;
            }else if(a<c){
             cout<<-1<<endl;
            }else if(a==c){
              cout<<0<<endl;
            }
        }

 */