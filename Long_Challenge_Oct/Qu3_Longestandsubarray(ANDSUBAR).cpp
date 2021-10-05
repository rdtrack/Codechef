// Link for question
// https://www.codechef.com/OCT21C/problems/ANDSUBAR

#include<iostream>
using namespace std;
int mod=1e9+7;
#define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
typedef long long int ll;
int main(){
    int t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
        if(n==1){
            cout<<"1"<<endl;
            continue;
        }
        ll ans =1;
        while(ans*2<=n){
            ans*=2;
        }
        ll res =n-ans+1;
        if(n==res){
            cout<<ans/2<<endl;
        }
        else{
            cout<<max(res, ans/2)<<endl;
        }
    }
    return 0;
}
