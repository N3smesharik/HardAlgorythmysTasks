#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    long double a = 0, b = 0, res = 0, a1, b1, n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> a1 >> b1;
        a = a - a1;
        b = b - b1;
        res += sqrt(a * a + b * b);
        a = a1;
        b = b1;
    }
    res += sqrt(a1 * a1 + b1 * b1);
    printf("%.3lf", res);
}
