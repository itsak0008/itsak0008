#include <iostream>
#include <vector>
#include <set>

using namespace std;

class solution
{
public:
    vector<int> commonelement(int A[], int B[], int C[], int n1, int n2, int n3)
    {
        vector<int> ans;
        set<int> st;

        int i, j, k;
        i = j = k = 0;
        while (i < n1 && j < n2 && k < n3)
        {
            if (A[i] == B[j] && B[j] == C[k])
            {
                st.insert(A[i]);
                i++, j++, k++;
            }
            else if (A[i] < B[j])
            {
                i++;
            }
            else if (B[j] < C[k])
            {
                j++;
            }
            else
            {
                k++;
            }
        }
        for (auto i : st)
        {
            ans.push_back(i);
        }
        return ans;
    }
};
int main()
{
    solution obj;

    int A[] = {1, 2, 3, 4, 5, 6};
    int n1 = sizeof(A) / sizeof(int);
    int B[] = {5, 6, 7, 9, 13};
    int n2 = sizeof(B) / sizeof(int);
    int C[] = {5, 6, 8, 10, 12, 15, 16, 17};
    int n3 = sizeof(C) / sizeof(int);

    vector<int> result = obj.commonelement(A, B, C, n1, n2, n3);

    cout << "Common elements: ";
    for (int i = 0; i < result.size(); i++)
    {
        cout << result[i] << " ";
    }

    return 0;
}