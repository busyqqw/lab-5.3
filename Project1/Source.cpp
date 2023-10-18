#include <iostream> 
#include <cmath>
#include <iomanip>
using namespace std;
double factorial(int n) {
    double result = 1;
    for (int i = 1; i <= n; i++) {
        result *= i;
    }
    return result;
}

double series(double x) {
    double result = 0;
    for (int n = 0; n < 5; n++) {
        result += pow(-1, n) * pow(x, 2 * n + 1) / factorial(2 * n + 1);
    }
    return result;
}

int main() {
    double tnoch, tkin, n;
    cout << "Enter tnoch: ";
    cin >> tnoch;
    cout << "Enter tkin: ";
    cin >> tkin;
    cout << "Enter n: ";
    cin >> n;

    cout << setw(15) << "t" << setw(15) << "series(t² +1)" << endl;
    for (double t = tnoch; t <= tkin; t += (tkin - tnoch) / n) {
        cout << setw(15) << t << setw(15) << series(t * t + 1) << endl;
    }

    return 0;
}