#include <iostream>
using namespace std;

int main() {
    int x, y, z;

    cin >> x >> y >> z;

    if (x <= y) {
        if (x <= z)
            cout << x << " is the Least of all";
        else
            cout << z << " is the Least of all";
    }
    else {
        if (y <= z)
            cout << y << " is the Least of all";
        else
            cout << z << " is the Least of all";
    }

    return 0;
}
