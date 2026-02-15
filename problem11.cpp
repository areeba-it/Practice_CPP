#include<iostream>
using namespace std;
int main(){
    int score;
    cout<<"Enter your test score:";
    cin>>score;
    if(score>=90)
    cout<<"your grade is A.";
   else if(score>=80)
    cout<<"your grade is B.";
   else if(score>=70)
   cout<<"your grade is C.";
   else if(score>=60)
   cout<<"your grade is D.";
   else
   cout<<"your grade is F.";
   return 0;
}