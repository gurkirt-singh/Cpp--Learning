#include<iostream>
using namespace std;
int main(){
int n;

cout<<"Enter a Number : ";
cin>>n;
if(n<0)
    n=-n;
    
int i=1;
while(n>0){
    int l=n%10;
    cout<<l;
    n=n/10;
i++;

}
}
