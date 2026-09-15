#include<iostream>
using namespace std;
int main(){
int n,o;
int s=0;
cout<<"Enter a Number : ";

cin>>n;
if(n<0)
n=-n;

//my mistake:   1) not doing n/10 in odd digits so the loop stuck on same digit
        //      2) skip the else part entirely
// while(n>0){
//     int l=n%10;
//    if(l%2==0)
//     {s+=l;
//     n=n/10;
// i++;}
//     else
//     continue;

// }

    while(n>0){
        int l = n%10;
        if(l%2==0)
            s += l;
        n = n/10;      // now runs every iteration, no matter what
    }

    cout<<"The sum of even digits of this number is : "<<s;
}
