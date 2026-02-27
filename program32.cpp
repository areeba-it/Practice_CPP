#include<iostream>
using namespace std;
int sum(int arr[],int size){
    int total=0;
    for(int i=0;i<size;i++){
        total+=arr[i];
    }
    return total;
}
int main(){
    int numbers[]={1,2,3,4,5};
    int size=sizeof(numbers)/sizeof(numbers[0]);
    cout<<"total"<<sum(numbers,size)<<endl;
    return 0;
}