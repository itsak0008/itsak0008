#include <iostream>
using namespace std;

int square_root(int target)
{
    int start = 0;
    int end = target;
    int mid = start + (end - start) / 2;
    int ans = -1;
    while (start <= end)
    {
        if (target < 0)
        {
            cout << "Square root of negative numbers is not defined." << endl;
            return -1; // Indicate an error for negative input
        }

        if (mid * mid == target)
        {
            return mid;
        }
        if (mid * mid < target)
        {
            start = mid + 1;
            ans = mid;
        }
        else
        {
            end = mid - 1;
        }
        mid = start + (end - start) / 2;
    }
    return ans;
}

int main()
{
    int target;
    cout << "enter square root value : ";
    cin >> target;

    int result = square_root(target);
    if (result == -1)
    {
        return 0; // Exit if the input is negative
    }
    // cout << "Ans is -> " << result<<endl;

    int preicion;
    cout << "Enter the number of preicion : ";
    cin >> preicion;

    double step = 0.1;
    double finalans = result;

    for (int i = 0; i < preicion; i++)
    {
        for (double j = finalans; j * j <= target; j = j + step)
        {
            finalans = j;
        }
        step = step / 10;
    }

    cout << "Final ans is -> " << finalans;

    return 0;
}