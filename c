#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
set<ll>s;
void creatLucky(ll fac){
    if(fac>1e12)return;
ll x=4+10*fac;
ll y=7+10*fac;
s.insert(x);
s.insert(y);
creatLucky(x);
creatLucky(y);
 }
ll next(ll start,ll e){
  ll sum = 0;
ll curr = start;

for (ll x : s) {
    if (x < curr)
        continue;
    ll to = min(e, x);
    sum += (to - curr + 1) * x;
    curr = to + 1;
    if (curr > e)
        break;
}



  return sum;
 }
int main() {
    
  int l,r;
  cin>>l>>r;
  creatLucky(0);
  cout<<next(l,r);
   
    
    return 0;
    
    }
