#include<iostream>
using namespace std;
int main(){
int n;
cout<<"Enter a Number : ";

cin>>n;
bool x=true;

for(int i=2; i<n/2; i++){
    if(n%i==0)
   x=false;
   break;

    


}
if(x==true)
cout<<"This is a prime No.";
else
cout<<"This is a Composite No.";

}