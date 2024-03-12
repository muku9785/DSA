#include <iostream>
using namespace std;
int facto(int n)
{
    int fact = 1;
    for (int i = 1; i <= n; i++)
    {
        fact = fact * i ;
    };
    return fact;
}

int ncr(int n, int r)
{
    int num = facto(n);
    int den = facto(r) * facto(n - r);
    int res = num / den;
    return res;
}
int main()
{
    int a,b;
    cin >> a;
    cin >> b;
    cout << ncr(a, b);

    return 0;
}
