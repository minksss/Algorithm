// 백준 숨바꼭질

#include <iostream>
#include <queue>
#include <algorithm>
#include <vector>

using namespace std;

bool visit[100001];

int main(){
    int n1,n2;
    // n1 = 수빈, n2 = 동생
    cin >> n1 >> n2;

    queue<pair<int,int > > q;
    q.push({n1,0});
    visit[n1] = true;

    while(!q.empty()){
        int x = q.front().first;
        int cnt = q.front().second;
        q.pop();

        
        if(x == n2){
            cout << cnt;
            break;
        }
    
        int nx = x - 1;
        if( nx>=0 && visit[nx] == false){
            q.push({nx,cnt+1});
            visit[nx] = true;
            }
        
        int nx2 = x + 1;
        if ( nx2 <= 100000 && visit[nx2] == false){
            q.push({nx2,cnt+1});
            visit[nx2]= true;
        }

        int nx3 = x*2;
        if(nx3 <= 100000 && visit[nx3] == false){
            q.push({nx3,cnt+1});
            visit[nx3]=true;
        }

    
        }
    return 0;
    }

