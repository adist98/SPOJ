/*
* #  SORTING 
* #  BINARY SEARCH
* #  MATH
*/
#include<bits/stdc++.h>
#define min_3(a,b,c) (min((a),min((b),(c))))
#define SET(a) memset(a,-1,sizeof(a))
#define ALL(a) a.begin(),a.end()
#define CLR(a) memset(a,0,sizeof(a))
#define FILL(a,v) memset(a,v,sizeof(a))
#define PB push_back
#define PI acos(-1.0)
#define INF 1000000007
#define NINF -1000000007
#define FOR(i,a,n) for(long long i=a;i<=n;i++)
#define REP(i,n) FOR(i,0,n)
#define rep(i,n) FOR(i,0,n-1)
using namespace std;
typedef long long ll;
typedef pair<ll,ll> vi;
typedef vector<vi> vii;
//***********************BINARY SEARCH **************************
ll binary(ll a[],ll left,ll right,ll search){
    ll mid=(ll)(left+right)/2;
    if(left<=right){
    if(search == a[mid]) return mid;
    else if(search<a[mid]) return binary(a,left,mid-1,search);
    else if(search>a[mid]) return binary(a,mid+1,right,search);
    }
    return -1;
}
//****************************************************************
int main() {
    ll n,k;
    cin>>n>>k;
    ll i,a[n];
    rep(i,n) cin>>a[i];
    ll ans=0;
//**********************SORTING***********************************
    sort(a,a+n);
//****************************************************************
 
//***********************MATHEMATICAL LOGIC***********************
    for(ll i=0;i<n;i++){
        ll temp=binary(a,i+1,n,k+a[i]);
            if(temp>=0){
                ans++;
            }
    }
//*****************************************************************
    cout<<ans;
    return 0;
}
