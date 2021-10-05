// Question Link
// https://www.codechef.com/OCT21C/problems/MIXTURE


#include<iostream>
using namespace std;
int main(){
    int testc,num;
    cin>>num;
    for(testc=0;testc<num;testc++){
        int a,b;
        cin>>a>>b;
        if(a==0){
            cout<<"Liquid"<<endl;
        }
        else if (b==0)
        {
            cout<<"Solid"<<endl;
        }
        else{
            cout<<"Solution"<<endl;
        }
    }
    return 0;
}
