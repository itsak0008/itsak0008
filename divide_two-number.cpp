#include <iostream>
using namespace std;

int solve(int dividend, int divisor)
{
    int start = 0;
    int end = abs(dividend);
    int ans = 0;

    while (start <= end)
    {
        int mid = start + (end - start) / 2;
        if (mid * abs(divisor) == abs(dividend))
        {
            return mid;
        }
        if (mid * abs(divisor) > abs(dividend))
        {
            end = mid - 1;
        }
        else
        {
            ans = mid;
            start = mid + 1;
        }
    }
    if (dividend > 0 && divisor > 0 || dividend < 0 && divisor < 0)
    {
        return ans;
    }
    else
    {
        return -ans;
    }
}

int main()
{
    int dividend = 22;
    int divisor = 7;

    int ans = solve(dividend, divisor);
    cout << "Ans is " << ans << endl;

    int precision;
    cout << "enter the number4 of floating digits to precision " << endl;
    cin >> precision;

    double step = 0.1;
    double finalans = ans;
    for (int i = 0; i < precision; i++)
    {

        for (double j = finalans; j * divisor <= dividend; j = j + step)
        {
            finalans = j;
        }
        step = step / 10;
    }
    cout << "final ans is. " << finalans << endl;

    return 0;
}