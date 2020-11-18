#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'
#define all(v) v.begin(),v.end()
#define sz(v)				((int)((v).size()))
#define lp(i, n)		for(int i=0;i<(int)(n);++i)
#define rep(i, v)		for(int i=0;i<sz(v);++i)
const ll N = 1e3 + 1;
void SezoCompiler()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
}
/*
------------
bool is_prime(long long x)
{
    if (x == 1)
        return false;
    for (int i = 2; i * i <= x; i++)
        if (x % i == 0)
            return false;
    return true;

}
------------
ll gcd(int a , int b)
{
    return b==0 ? a : gcd(b , a%b);
}
------------
cout <<fixed <<showpoint;
cout <<setprecision(2);
------------
bool sorting(pair<int, double>& a,pair<int, double>& b)
{
    return a.second < b.second;
}
------------
convert string to ll -> X = atoll(str.c_cstr())
substr(index,pos) copy string from index to index + pos
-----------
bool sortbyDesc(const pair<int,int> &a,
              const pair<int,int> &b)
{
    return (a.second > b.second);
}
------------
bool sortbyAsc(const pair<int,int> &a,
              const pair<int,int> &b)
{
    return (a.second > b.second);
}
------------
bool sortbyFirstAndSecond(const pair<int,int> &a,
              const pair<int,int> &b)
{
    //Higher second and lower first
    if(a.second > b.second){
        return (a.second > b.second);
    }
    if(a.second == b.second){
        return (a.first < b.first);
    }
    return false;

}
------------
bool sortbyFirstAndSecond(const pair<int,int> &a,
              const pair<int,int> &b)
{
    if(a.second > b.second){
        return (a.second > b.second);
    }
    if(a.second == b.second){
        return (a.first < b.first);
    }
    return false;

}
------------
two pointers
int l =0,r=0;
ll ans = 0;
while(l<n){
    while(r<n&&sum+a[r]<=m){
        sum+=a[r];
        r++;
    }
    ans = max(ans,sum);
    sum-=a[l];
    l++;
}
-----------
two pointers
bool fun(ll sum){
    int l = 0,r=n-1;
    while(l<r){
     if(a[l]+a[r]==sum)return 1;
     else if(a[l]+a[r]>sum) r--;
     else l++;
    }
}
-----------
binary search
while(low <= high)
   {
        mid = (low + high) / 2;
        if (x < a[mid])
            high = mid - 1;
        else if (x > a[mid])
         low = mid + 1;
       else
         return mid;
   }

*/
int a[51];
int main(){
    SezoCompiler();
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
		for(int i=0;i<n;i++){
            cin>>a[i];
		}
		sort(a,a+n);
		int mxtm=0;
		for(int i=2;i<=100;i++){
            int pairC=0;
            int st=0,en=n-1;
            while(st<en){
                if(a[st]+a[en]==i){
                    pairC++;
                    st++;
                    en--;
                }
                else if(a[st]+a[en]>i) en--;
                else st++;
            }
            mxtm=max(mxtm,pairC);
        }
        cout<<mxtm<<endl;
    }
    return 0;
}
