#include<iostream>
using namespace std;
int main(){
    float a,b;
    char op;
    cout<<"Enter a floating point number";
    cin>>a;
    cout<<"Enter a operator";
    cin>>op;
    cout<<"Enter secound floating point number";
    cin>>b;
    switch(op){
        case '+':
        cout<<a+b<<endl;
        break;
        case '-':
        cout<<a-b<<endl;
        break;
        case '*':
        cout<<a*b<<endl;
        break;
        case '/':
        if(b==0)
            cout<<"division by zero"<<endl;
        else{
            cout<<a/b<<endl;
        }
        break;
        default:
        cout<<"invalid operator"<<endl;
    }
    return 0;
}