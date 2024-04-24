#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> v(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        int i = 0, j = v.size() - 1, val = 0;
        while (i < j)
        {
            if (v[i] == v[j])
            {
                val = v[i];
                break;
            }
            else if (v[i] == v[i + 1])
            {
                val = v[i];
                break;
            }
            else if (v[i + 1] = v[i + 2])
            {
                val = v[i + 1];
                break;
            }

            j--;
            i++;
        }

        for (int i = 0; i < v.size(); i++)
        {
            if (v[i] != val)
            {
                cout << i + 1;
            }
        }
        cout << endl;
    }
    return 0;
}
