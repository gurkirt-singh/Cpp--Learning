#include<iostream>
using namespace std;
int fact(int a){
    int f=1;
    for(int i=1; i<=a; i++ )
     f*=i;
    return f;

}
int main(){
    int n,r;
    cout<<"Enter n: ";
    cin>>n;
    cout<<"Enter r: ";
    cin>>r;
  int a=fact(n);
  int b=fact(r);
  int c=fact(n-r);

    cout<<n<<"C"<<r<<" is : "<<a/(b*c);
}