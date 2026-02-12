#include<iostream>
using namespace std;
int main(){
    int i,j;
    char ch='A';
    for(i=1;i<=5;i++){
        for(j=1;j<=i;j++){
            cout<<ch;
            ch++;
        }
        ch='A';
        cout<<endl;
    }
    return 0;
}