#include<iostream>
using namespace std;

int main(){

    int s;
    cout<<"Enter no. of Rows or colums: ";
    cin>>s;
 
    int a=1;
    for(int i=1; i<=s; i++){
       for(int j=1; j<=i; j++){
        if((i+j)%2==0)
           cout<<1<<" ";
           else
           cout<<0<<" ";

     a+=1;
    }
    cout<<endl;
        
}
       
        
}
