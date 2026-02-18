#include<iostream>
#include<iomanip>
using namespace std;
int main(){
    float temp,temp2;
    int choice;
    cout<<"1.farenheit to centigarde. "<<endl;
    cout<<"2.centigarte to farenheit."<<endl;
    cout<<"Enter your choice";
    cin>>choice;
    switch(choice){
        case 1:
        cout<<"Enter temp in farenheit";
        cin>>temp;
        temp2=(temp-32)*5.0/9.0;
        cout<<setprecision(3)<<temp<<"farenheit="<<temp2<<"centigarde";
        break;
        case 2:
        cout<<"Eenter temperature in centigrade:";
        cin>>temp;
        temp2=(9.0/5.0)*temp+32;
        cout<<setprecision(3)<<temp<<"centigrade="<<temp2<<"farenheit";
        break;
        default:
        cout<<"invalid choice.";
    }
    return 0;
}