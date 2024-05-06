#include <iostream>
#include <cmath>

using namespace std;


double findNthTerm(int n) {

    if (n == 1) {
        return 0.4;
    }

    else {
        return findNthTerm(n - 1) / 10;
    }
}

int main() {
    int n;
    cout << "Enter the value of n: ";
    cin >> n;


    cout << "The " << n << "-th term of the series is: " << findNthTerm(n) << endl;

    return 0;
}
