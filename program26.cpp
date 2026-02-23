#include<iostream>
using namespace std;
void tab(int n);
int main(){
    int n;
    cout<<"Enter a number:";
    cin>>n;
    tab (n);
    return 0;
}
void tab(int n){
    for(int i=1;i<=20;i++)
    cout<<n<<"*"<<i<<"="<<n*i<<endl;
}