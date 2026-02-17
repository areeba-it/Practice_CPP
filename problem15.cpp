#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter number of weeks day";
    cin>>n;
    switch(n){
        case 1:
        cout<<"friday";
        break;
        case 2:
        cout<<"saturday";
        break;
        case 3:
        cout<<"sunday";
        break;
        case 4:
        cout<<"monday";
        break;
        case 5:
        cout<<"tuesday";
        break;
        case 6:
        cout<<"wednesday";
        break;
        case 7:
        cout<<"thursady";
        break;
     default:
     cout<<"invalid number";
    }
    return 0;
}