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
        vector<int> r(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        for (int i = 0; i < n; i++)
        {
            cin >> r[i];
        }
        int countOne = 0, countTwo = 0, om = 0, addy = 0;
        for (int i = 0; i < n; i++)
        {
            if (v[i] != 0)
            {
                countOne++;
            }
            if (v[i] == 0)
            {
                if (om < countOne)
                {
                    om = countOne;
                }
                countOne = 0;
            }
        }
        for (int i = 0; i < n; i++)
        {
            if (r[i] != 0)
            {
                countTwo++;
            }
            if (r[i] == 0)
            {
                if (addy < countTwo)
                {
                    addy = countTwo;
                }
                countTwo = 0;
            }
        }
        if (countOne > om)
        {
            om = countOne;
        }

        if (countTwo > addy)
        {
            addy = countTwo;
        }
        if (om < addy)
        {
            cout << "Addy" << endl;
        }
        else if (om == addy)
        {
            cout << "Draw" << endl;
        }
        else
        {
            cout << "Om" << endl;
        }
    }

    return 0;
}
