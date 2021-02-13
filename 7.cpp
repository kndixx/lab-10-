#include <iostream>
using namespace std;

int main() {
    int a;
    int b;
    int c;
    cin >> a >> b >> c;
    
    if ((c < a + b) && (a < b + c) && (b < a + c)) {
        cout << "YES";
    } else {
        cout << "NO";
    }
    return 0;
}
