#include <iostream>
using namespace std;

int main() {
    int x;
    cin >> x;
    
    int d = x % 10;
    x = x / 10;
    int c = x % 10;
    x = x / 10;
    int b = x % 10;
    x = x / 10;
    int a = x % 10;
    
    if ((a == d) && (b == c)) {
        cout << "YES";
    } else {
        cout << "NO";
    }
    return 0;
}
