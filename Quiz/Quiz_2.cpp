#include <iostream>
using namespace std;

int main() {

    int n = 15;
    int b = 0, c = 1, r = 0;
    int a = 1;
    cout << "Deret Fibonacci: " << endl;
    while (a <= n) {
        if (a == 1) {
            cout << b << " ";
            a++;
            continue;
        }
        if (a == 2) {
            cout << c << " ";
            a++;
            continue;
        }
        r = b + c;
        b = c;
        c = r;
        cout << r;
        if (a != n) {
            cout << " ";
        }
        a++;
    }
    cout << endl;
    return 0;


}