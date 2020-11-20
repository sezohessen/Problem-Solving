#include <bits/stdc++.h>	
using namespace std;	
typedef long long ll;	
void fast()	
{	
ios_base::sync_with_stdio(false);	
cin.tie(NULL);	
}	
map<ll,ll,greater<ll> >m;	
void dividers(ll n)	
{	
    ll i;	
    m[n]++;	
    for (i=1;i<=sqrt(n);i++){	
        if (n%i==0){	
            m[i]++;	
            m[n/i]++;	
        }	
    }	
}	
ll gcd(ll a, ll b) {	
	return b == 0 ? a : gcd(b, a % b);	
}	
int main()	
{	
    ll a,b,n,z;	
    cin>>a>>b;	
    cin>>n;	
    z = gcd(a,b);	
    dividers(z);	
    for(int i =0;i<n;i++){	
        int flag = 0;	
        map<ll,ll>::iterator itr;	
        ll x,y;	
        cin>>x>>y;	
        for (itr = m.begin(); itr != m.end(); ++itr){	
       if(itr->first>=x&&itr->first<=y){	
                flag = 1;	
                break;	
            }	
        }	
        if(flag==0){	
            cout<<-1<<endl;	
        }else{	
            cout<<itr->first<<endl;	
        }	
    }	


  return 0 ;	
}	
