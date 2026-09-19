#include<iostream>
#include<cmath>
using namespace std;
void swap(int& a, int& b){
    int temp;
    temp=a;
    a=b;
    b=temp;
    
}
int main(){
    float a,b;
    cout<<"Enter 1st Number: ";
    cin>>a;
    cout<<"Enter 2nd Number: ";
    cin>>b;


    cout<<"The swap of these 2 numbers is ";
    swap(a,b);
    cout<<a<<" "<<b;




}