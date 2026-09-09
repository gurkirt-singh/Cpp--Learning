#include<iostream>
using namespace std;
int main(){
    int n, count = 0;
    cout << "Enter a Number : ";
    cin >> n;

    if (n == 0) count = 1;   // special case: 0 has 1 digit

    while (n != 0) {
        n = n / 10;   // shrink n itself, not n/(i*10)
        count++;
    }

    cout << count;
}