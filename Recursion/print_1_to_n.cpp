#include<iostream>
using namespace std;
void print(int n){
    if(n==0) return;
    print( n-1);
    cout<<n<<'\n';
    //just swaped lines 5 and 6: 
    //actuallly now fxn calls itself before printing and calls itself until it hits the baseline condition of return.
    //after that it revisit each call and run the last left  line (cout) after call statement.
}
int main(){
    int n;
    cout<<"Enter a number: ";
    cin>>n;

    print(n);



}