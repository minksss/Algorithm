#include <iostream>
#include <set>
#include <string>

using namespace std;

int main()
{
    set<string> s;
    set<string> ans;
    int n, m;
    cin >> n >> m;

    for (int i = 0; i < n; i++)
    {
        string str;
        cin >> str;
        s.insert(str);
    }

    for (int i = 0; i < m; i++)
    {
        string str;
        cin >> str;
        if (s.find(str) != s.end())
        {
            ans.insert(str);
        }
    }

    cout << ans.size() << endl;
    for (auto res : ans)
    {
        cout << res << endl;
    }
    return 0;
}