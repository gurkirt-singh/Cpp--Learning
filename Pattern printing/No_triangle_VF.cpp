#include<iostream>
using namespace std;

int main(){

    int s;
    cout<<"Enter no. of Rows or colums: ";
    cin>>s;
 

    for(int i=1; i<=s; i++){
       for(int j=1; j<=s-i; j++)
        {cout<<"  ";
      }
       for(int k=1; k<=i; k++)
      {  cout<<k<<" ";
        }
       cout<<endl;
        
}
}