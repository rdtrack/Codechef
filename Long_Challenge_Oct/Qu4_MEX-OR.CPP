// Question Link
//https://www.codechef.com/OCT21C/problems/MEXOR

#include<iostream>
using namespace std;
int mod=1e9+7;
#define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
typedef long long int ll;

int main(){
    fast;
    int t;
    cin>>t;
    while(t--){
        ll x;
        cin>>x;
        if(x==0){
            cout<<"1"<<endl;
        }
        else if(x==1||x==2){
            cout<<"2"<<endl;
        }
        else
        {
            ll ans=1;
        while(ans*2<=x){
                ans*=2;
            }
        if(ans==x){
            cout<<x<<endl;
            }
        else if(x==(2*ans-1)){
            cout<<x+1<<endl;
            }
            else{
            cout<<ans<<endl;
            }
        }
    }
}
