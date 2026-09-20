#include<iostream>
using namespace std;
int power(int a, int b){
    if( b==0) return 1;
    // if(a==0) return 0;
        return a * power(a,b-1);




}
int main(){
    int a, b;
    cout<<"Enter a number: ";
    cin>>a;
    cout<<"Enter the power: ";
    cin>>b;

    cout<<a<<"^"<<b<<" is: "<<power(a,b);
    // cout<<power(a,b);



}