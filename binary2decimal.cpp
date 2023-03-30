// convert binary to decimal

#include<iostream>
#include<math.h>
using namespace std;

int main(){
    int n,deci=0;
    cout<<"enter the binary no.:";
    cin>>n;

    for(int i=0;n>0;i++){
        int m=n%10;
        if(m!= 0 && m!=1){
            cout<<"entered input is not binary"<<endl;
            return 0;
        }
        deci+=(m)*pow(2,i);
        n/=10;
        
    }
    cout<<"in decimal:"<<deci<<endl;

}