#include <bits/stdc++.h> 
#define ll long long 
#define ld long double
using namespace std;

void hehe() {
#ifndef RTE
  if (fopen("input.txt", "r")) {
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
  }
#endif
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);
}

void solve(){
    ll n,m,k,ans=0,a2=0;
    cin>>n>>m>>k;
    if(n%k==0||m%k==0){
        ans+=n/k;
        ans+=floor((float)m/k);
        a2=0;
    }
    else{
        ll q=n%3;
        ll o=m%3;
        if(q==1&&o==1){
            ans+=floor((float)m/k);
            ans+=floor((float)n/k);
            a2=0;
        }
        else{
            ans+=floor((float)m/k);
            ans+=floor((float)n/k)+1;
            a2=1;
        }
    }
    cout<<ans<<" "<<a2;
}

int main(){
     hehe();
     int t=1;
     while(t--)
     solve();
}
