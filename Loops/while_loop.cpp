#include<iostream>
using namespace std;
int main(){
int n;
cout<<"Enter a Number : ";

cin>>n;
if(n>0)
{int i = n;
while(i>=1){
    cout<<i<<'\n';
    i--;
}

}
else
{int m=n;
while(m<=1){
    cout<<m<<'\n';
    m++;
}
}
}
