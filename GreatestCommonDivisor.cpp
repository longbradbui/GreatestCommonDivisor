#include <iostream>
using namespace std;

int GreatestCommonDivisor(int a, int b)
{
    if (b == 0)
    {
        return a;
    }
    return GreatestCommonDivisor(b, a % b);
}

int main()
{
    int a = 4095;
    int b = 2590;
    cout << "Greatest Common Divisor between " << a << " and " << b << ": " << GreatestCommonDivisor(a, b) << endl;
    return 0;
}