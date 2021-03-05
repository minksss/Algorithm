#include <iostream>
#include <queue>
#include <stack>
#include <cstring>

int n, m, v;
int board[1001][1001];
int map[1001];
bool visit[1001];

using namespace std;

void dfs(int v)
{
    visit[v] = true;

    for(int i=v; i<n;i++){
        if(!visit[i]){
            visit[i] = true;
            dfs(i);

            visit[i] = false;
            
        }
    }
    

}

void bfs(int v)
{
    visit[v] = true;
    queue<int> q;
    q.push(v);

    while (!q.empty())
    {
        int x = q.front();
        q.pop();
        cout << x << " ";

        for (int i = 0; i < n; i++)
        {
            if (board[x][i] == 1 && visit[i] == false)
            {
                q.push(i);
                visit[i] = true;
            }
        }
    }
}

void reset()
{
    for (int i = 0; i < n; i = 0)
    {
        visit[i] = false;
    }
}

int main()
{
    cin >> n >> m >> v;
     int n1, n2;
    for (int i = 0; i < m; i++)
    {
        cin >> n1 >> n2;
        board[n1][n2] = 1;
        board[n2][n1] = 1;

    }

    
        
    dfs(v);
    memset(visit, false, sizeof(visit));
    cout << endl;

    bfs(v);

    return 0;
}