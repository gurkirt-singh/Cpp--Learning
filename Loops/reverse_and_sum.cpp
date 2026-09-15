#include<iostream>
using namespace std;
int main(){
int n,a;

cout<<"Enter a Number : ";
cin>>n;
if(n<0)
   { n=-n;}
    a=n;
int r=0;
while(n!=0){
    int l=n%10;
    r*=10;
    r+=l;
    n=n/10;



}
cout<<"The number is: "<<a<<'\n';
cout<<"Reverse of the number is: "<<r<<'\n';
cout<<"The sum of Number and its reverse is : "<<r+a;
}
