#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int rn=0;
    while(n<0){
        ld=n%10;
        rn=(rn*10)+ld;
        n=n/10;
    }
    cout<<rn;
}
