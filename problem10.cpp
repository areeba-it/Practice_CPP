#include<iostream>
using namespace std;
int main(){
    float salary,bouns;
    int grade;
    cout<<"Enter your salary";
    cin>>salary;
    cout<<"Enter your grade:";
    cin>>grade;
    if(grade>15)
        bouns=salary*50.0/100.0;
    else{
        bouns=salary*25.0/100.0;
        salary=salary+bouns;
        cout<<"your total salary is RS:";
        cout<<salary;
    }
    return 0;
}