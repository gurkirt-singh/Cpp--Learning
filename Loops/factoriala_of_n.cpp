#include<iostream>
using namespace std;
int main(){
int n,o;
int p=1;
cout<<"Enter a Number : ";
cin>>n;
if(n<0)
    n=-n;
    
for(int i=n; i!=0; i--  )
    p*=i;


cout<<"Factorial of this number is : "<<p;
}
