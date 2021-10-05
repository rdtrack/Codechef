// Question Link
// https://www.codechef.com/OCT21C/status/THREEBOX



#include<iostream>
using namespace std;
int main(){
    int testc,num;
    cin>>num;
    for(testc=0;testc<num;testc++){
        int a,b,c,d,sum,ans;
        cin>>a>>b>>c>>d;
        sum=a+b+c;
        // cout<<sum<<endl;
        if(sum<=d){
            cout<<"1"<<endl;
        }
        else if(a+b<=d){
            cout<<"2"<<endl;
        }
        else if(a+c<=d){
            cout<<"2"<<endl;
        }
        else{
           cout<<"3"<<endl;
        }   
    }
    return 0;
}
