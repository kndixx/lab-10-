#include <iostream>
using namespace std;

int main() {
    int a;
    int b;
    int c;
    cin >> a >> b >> c;
    
    if (a * a + b * b == c * c) {
        cout << "YES";
    } else {
        cout << "NO";
    }
    return 0;
}
