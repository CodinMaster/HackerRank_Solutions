#include <bits/stdc++.h>
#include <string.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    string s[t];
    int ans[t];

    for (int i = 0; i < t; i++)
    {
        cin >> s[i];
        ans[i] = 0;
    }

    for (int i = 0; i < t; i++)
    {
        if (s[i].length() % 2 != 0)
        {
            ans[i] = -1;
            continue;
        }

        string half1 = s[i].substr(0, s[i].length() / 2);
        string half2 = s[i].substr(s[i].length() / 2);

        sort(half1.begin(), half1.end());
        sort(half2.begin(), half2.end());

        int count = 0;
        for (int k = 0; k < s[i].length() / 2; k++)
        {
            int count_t = count;
            for (int l = 0; l < s[i].length() / 2; l++)
            {
                if (half1[k] == half2[l])
                {
                    half2[l] = 0;
                    count++;
                    break;
                }
            }
            if (count_t == count)
            {
                ans[i]++;
            }
        }
    }

    for (int i = 0; i < t; i++)
    {
        cout << ans[i] << "\n";
    }

    return 0;
}
