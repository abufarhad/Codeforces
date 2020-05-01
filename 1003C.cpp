//! Bismillahi-Rahamanirahim.
/** ========================================**
 ** @Author: Md. Abu Farhad ( RUET, CSE'15)
 ** @Category:
/** ========================================**/

#include<bits/stdc++.h>
#include<stdio.h>
#pragma GCC optimize("Ofast")
#pragma GCC target("avx,avx2,fma")
using namespace std;


#define ll                  long long
#define scl(n)              scanf("%lld",&n)
#define scc(c)	            scanf("%c",&c)
#define fr(i,n)             for (ll i=0;i<n;i++)
#define fr1(i,n)            for(ll i=1;i<=n;i++)
#define pfl(x)              printf("%lld\n",x)
#define pb                  push_back
#define debug               cout<<"I am here"<<endl;
#define pno                 cout<<"NO"<<endl
#define pys                 cout<<"YES"<<endl

#define l(s)                s.size()
#define asort(a)            sort(a,a+n)
#define all(x) 	            (x).begin(), (x).end()
#define dsort(a)            sort(a,a+n,greater<int>())
#define vasort(v)           sort(v.begin(), v.end());
#define vdsort(v)           sort(v.begin(), v.end(),greater<int>());
#define uniquee(x)          x.erase(unique(x.begin(), x.end()),x.end())
#define pn                  printf("\n")
#define md                  1000000007
#define inf                 1e18
#define ps                  cout<<" ";
#define Pi                  acos(-1.0)
#define pr                  pair<ll, ll>
#define ff                  first
#define ss                  second
#define mem(a,i)            memset(a, i, sizeof(a))
#define tcas(i,t)           for(ll i=1;i<=t;i++)
#define pcas(i)             cout<<"Case "<<i<<": "<<endl;
#define fast 	ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL)

int main()
{
   // fast;

    ll m,n,b,c,d,k,z,l,q,r;
    string s,s1, s2, s3, s4;

    ll cnt=0,ans=0,sum=0;
    cin>>n>>k;
    ll a[n];

    fr1(i,n)cin>>a[i];
    ll cmsm[n];
    mem(cmsm , 0);

    fr1(i, n)cmsm[i]=cmsm[i-1]+a[i];

    double mx=-1;
    ll i, j , x;
    for(i=k; i<=n; i++)
    {
        double f=i;
        for(j=i, x=0; j<=n; j++ , x++)
        {
            //cout<<cmsm[j]<<" "<<cmsm[x]<<" "<<f<<endl;
            double avg=double( (cmsm[j] - cmsm[x])/ f );
            mx=max( mx, avg);
            //cout<<"mx "<<avg<<" "<<mx<<endl;
        }
    }

    printf("%.12llf\n", mx);


return 0;
}

///Before submit=>
///    *check for integer overflow,array bounds
///    *check for n=1



