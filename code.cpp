#include <iostream>
using namespace std;

int lcm(int a, int b) {
    int x = a*b;
    while (b!= 0) {
        int r = a%b;
        a = b;
        b = r;
    }
    return x/a;
}

int main() {
    int a,b;
    cin >> a >> b;
    cout << lcm(a, b);
}
