#include<iostream>
using namespace std;
int main(){
    int i,j,num=0;
    for(i=1;i<=5;i++){
        for(j=1;j<=i;j++){
            num++;
            cout<<num;
        }
        cout<<endl;
    }
    return 0;
}