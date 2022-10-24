#include <iostream>
using namespace std;

int lcm(int a, int b) {
    int a1 = a;
    int b1 = b;
    while (b!= 0) {
        int r = a%b;
        a = b;
        b = r;
    }
    return a1*b1/a;
}

int main() {
    int a,b;
    cin >> a >> b;
    cout << lcm(a, b);
}
