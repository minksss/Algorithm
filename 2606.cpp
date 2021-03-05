#include <iostream>
#include <queue>

using namespace std;

int com[101][101];
bool visit[101];
int cnt;

int main()
{

    int n, m;

    cin >> n >> m;

    for (int i = 0; i < m; i++)
    {
        int num1, num2;
        com[num1][num2] = 1;
        com[num2][num1] = 1;
    }

    queue<int> q;

    q.push(1);
    visit[1] = true;

    while (!q.empty())
    {
        int nx = q.front();
        q.pop();

        for (int i = 1; i <= n; i++)
        {
            if (com[nx][i] == 1 && visit[i] == false)
            {
                q.push(i);
                visit[i] = true;
                cnt++;
            }
        }
    }

    cout << cnt;
    return 0;
}