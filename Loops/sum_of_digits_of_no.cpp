#include<iostream>
using namespace std;
int main(){
int n,o;
int s=0;
cout<<"Enter a Number : ";
if(n<0)
    n=-n;
    
cin>>n;
int i=1;
while(n>0){
    int l=n%10;
    s+=l;
    n=n/10;
i++;

}
cout<<"The sum of digits of this number is : "<<s;
}
