#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
double s(const double x);
int main()
{
    double tp, tk, z;
    int n;
    cout << "tp = "; cin >> tp; 
    cout << "tk = "; cin >> tk; 
    cout << "n = "; cin >> n;
    double tg = (tk - tp) / n;
    double t = tp ;

    cout << "----------------------------------" << endl;
    cout << "|" << setw(5) << "t" << setw(2) << "|" << setw(10) << "z" << setw(2) << "|" << endl;
    cout << "----------------------------------" << endl;


    while (t <= tk)
    {
        z = s(t * t + 1) + 2 * pow(s(1 - t), 2) + s(1);
        cout << "|" << setw(5) << t << setw(2) << "|" << setw(10) << z << setw(2) << "|" << endl;
        t += tg;
    }
    cout << "----------------------------------" << endl;
    return 0;
}
double s(const double x)
{
    if (abs(x) > 1)
        return (pow(cos(x), 2) + 1 / exp(x));
    else
    {
        double S = 0;
        int k = 0;
        double a = 1;
        S = a;
        do
        {
            k++;
            double R = (x * x) / ((2 * k + 1) * 2 * k);
            a *= R;
            S += a;
        } while (k < 4);
        return S;
    }
}