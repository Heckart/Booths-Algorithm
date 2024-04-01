#include "booths.h"
#include <iostream>

using namespace std;

int main() {

    string multiplicand, multiplier;

    cout << "Enter multiplicand (binary): ";
    cin >> multiplicand;
    cout << "Enter multiplier (binary): ";
    cin >> multiplier;

    // Ensure both strings are of equal length
    // This should make results accurate for different lengths
    int length = max(multiplicand.length(), multiplier.length());
    multiplicand = string(length - multiplicand.length(), '0') + multiplicand;
    multiplier = string(length - multiplier.length(), '0') + multiplier;

    string result = boothsAlgorithm(multiplicand, multiplier);

    cout << "Product (in 2s complement): " << result << endl;

    return 0;
}
