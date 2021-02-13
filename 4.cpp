#include <iostream>
using namespace std;

int main() {
    int x;
    cin >> x;
    
    int c = x % 10;
    x = x / 10;
    int b = x % 10;
    x = x / 10;
    int a = x % 10;
    
    if (((a > b) && (b > c)) || ((a < b) && (b < c))) {
        cout << "YES";
    } else {
        cout << "NO";
    }
    return 0;
}
