#include<iostream>
using namespace std;
int main(){
    int marks;
    cout<<"Enter your marks:";
    cin>>marks;
    cout<<"result is"<<(marks>40?"pass":"fail");
    return 0;
}