#include<iostream>
using namespace std;
int main(){
int n;
int p=1;
cout<<"Enter a Number : ";
cin>>n;

if(n<0)
n=-n;
int i=1;
while(n>0){
    int l=n%10;
    if(l!=0)
   { p*=l;
    n=n/10;
i++;}
    else
  {  p=0;
    break;}

}
cout<<"The product of digits of this number is : "<<p;
}
