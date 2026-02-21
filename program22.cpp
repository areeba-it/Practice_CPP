#include<iostream>
using namespace std;
int main(){
    int number,option;
    char letter;
    cout<<"1.covert ASCII value to Character"<<endl;
    cout<<"2.convert Character to ASCII value"<<endl;
    cout<<"Enter your choice"<<endl;
    cin>>option;
    switch(option){
        case 1:
        cout<<"Enter a number";
        cin>>number;
        cout<<"The Corresponding charcarter is:"<<char(number)<<endl;
        break;
        case 2:
        cout<<"Enter a letter";
        cin>>letter;
        cout<<"ASCII value of the letter is:"<<int(letter)<<endl;
        break;
        default:
        cout<<"invalid option!";
        break;
    }
    return 0;
}