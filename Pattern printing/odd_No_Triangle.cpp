#include<iostream>
using namespace std;

int main(){

    int s;
    cout<<"Enter no. of Rows or colums: ";
    cin>>s;
 
//Method 1: 
    for(int i=1; i<=s; i++){
       for(int j=1; j<=i; j++)
        cout<<2*j-1;
        cout<<endl;
       
        
}
//Method 2: 
    for(int i=1; i<=s; i++){
       int a=1;
       for(int j=1; j<=i; j++){
        cout<<a;
        a+=2;
        }
        cout<<endl;
        
}
//Method 3: 
    for(int i=1; i<=s; i++){
       for(int j=1; j<=2*i-1; j+=2)
        cout<<j;
        cout<<endl;
       
        
}
}