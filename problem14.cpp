#include<iostream>
using namespace std;
int main(){
    char ch;
    cout<<"Enter any character";
    cin>>ch;
    if (ch =='A'|| ch=='a'|| ch=='E'|| ch=='e'|| ch=='I'|| ch=='i'|| ch=='O'|| ch=='o'|| ch=='U'|| ch=='u')
    cout<<"entered a Vowel"<<ch;
    else
    cout<<"did not entered a Vowel"<<ch;
    return 0;
}