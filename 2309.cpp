#include <iostream>
#include <algorithm>

using namespace std;
int hobbit[9];
int visit[9];
bool flag;

void dfs(int p, int cnt, int allSum)
{

    if (cnt == 7)
    {
        if (allSum == 100)
        {
            flag = true;
            for (int i = 0; i < 9; i++)
            {
                if (visit[i] == true)
                {
                    cout << hobbit[i] << endl;
                }
            }
        }
        return;
    }

    for (int i = p; i < 9; i++)
    {
        if (!visit[i])
        {
            visit[i] = true;

            dfs(i, cnt + 1, allSum + hobbit[i]);
            if(flag) break;

            visit[i] = false;
        }
    }
}

int main()
{

    for (int i = 0; i < 9; i++)
    {
        cin >> hobbit[i];
    }

    sort(hobbit, hobbit + 9);

    dfs(0, 0, 0);
}
