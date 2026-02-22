#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter a number";
    cin>>n;
    (n%3==0?cout<<"divisible by 3": cout<<"not dividible by 3");
    return 0;
}